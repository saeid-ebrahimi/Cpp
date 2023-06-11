#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BigInt
{
public:
	BigInt();
	BigInt(string num);
	BigInt(vector<int> num);
	BigInt operator+(const BigInt& bg)const;
	BigInt operator+(const int& num)const;
	BigInt& operator+=(const BigInt& bg);
	BigInt& operator+=(const int& num);
	bool operator==(const BigInt& bg)const;
	bool operator==(const int& num)const;
	vector<int> getNumber() { return number; }
	~BigInt();
	friend ostream& operator<<(ostream& out,const BigInt& bg);
	friend istream& operator >> (istream& in, BigInt& bg);
	friend BigInt& operator+=(const int& num, BigInt& bg);
private:
	vector<int> number;
};
BigInt::BigInt()
{
	vector<int> v(0);
	number = v;
}
BigInt::BigInt(string num)
{
	for (int i = 0; i < num.size(); i++)
		number.push_back(num[i] - 48);
}
BigInt::BigInt(vector<int> num)
{
	number = num;
}
BigInt::~BigInt()
{
}
BigInt BigInt::operator+(const BigInt& bg)const
{
	vector<int> tempNum;
	int sizeDiff;
	if (number.size() < bg.number.size())
		sizeDiff = bg.number.size() - number.size();
	else
		sizeDiff = number.size() - bg.number.size();

	if (number.size() < bg.number.size())
	{
		tempNum = bg.number;
		for (int i = bg.number.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else if (number.size() > bg.number.size())
	{
		tempNum = number;
		for (int i = number.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += bg.number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else
	{

		tempNum = number;
		for (int i = number.size() - 1; i >= 0; --i)
		{
			tempNum[i] += bg.number[i];
			if (tempNum[i] >= 10)
				if (i != 0)
				{
					tempNum[i] -= 10;
					tempNum[i - 1]++;
				}
				else if (i == 0)
				{
					tempNum[i] -= 10;
					tempNum.resize(tempNum.size() + 1);
					for (int i = tempNum.size() - 1; i >= 1; i--)
						tempNum[i] = tempNum[i - 1];
					tempNum[0] = 1;
				}
		}
	}
	return BigInt(tempNum);
}
BigInt BigInt::operator+(const int& num)const
{
	int temp = num;
	int myMultiply = 1;
	int numSize = 1;
	vector<int> numVec;
	vector<int> tempNum;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	int sizeDiff;
	if (number.size() < numVec.size())
		sizeDiff = numVec.size() - number.size();
	else
		sizeDiff = number.size() - numVec.size();

	if (number.size() < numVec.size())
	{
		tempNum = numVec;
		for (int i = numVec.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else if (number.size() > numVec.size())
	{
		tempNum = number;
		for (int i = number.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += numVec[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else
	{

		tempNum = number;
		for (int i = number.size() - 1; i >= 0; i--)
		{
			tempNum[i] += numVec[i];
			if (i != 0)
				if (tempNum[i] >= 10)
				{
					tempNum[i] -= 10;
					tempNum[i - 1]++;
				}
		}
	}
	return BigInt(tempNum);
}
BigInt operator+(const int& num, BigInt& bigInt)
{
	int temp = num;
	int myMultiply = 1;
	int numSize = 1;
	vector<int> numVec;
	vector<int> tempNum;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	int sizeDiff;
	if (bigInt.getNumber().size() < numVec.size())
		sizeDiff = numVec.size() - bigInt.getNumber().size();
	else
		sizeDiff = bigInt.getNumber().size() - numVec.size();

	if (bigInt.getNumber().size() < numVec.size())
	{
		tempNum = numVec;
		for (int i = numVec.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += bigInt.getNumber()[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else if (bigInt.getNumber().size() > numVec.size())
	{
		tempNum = bigInt.getNumber();
		for (int i = bigInt.getNumber().size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += numVec[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
	}
	else
	{

		tempNum = bigInt.getNumber();
		for (int i = bigInt.getNumber().size() - 1; i >= 0; i--)
		{
			tempNum[i] += numVec[i];
			if (i != 0)
				if (tempNum[i] >= 10)
				{
					tempNum[i] -= 10;
					tempNum[i - 1]++;
				}
		}
	}
	return BigInt(tempNum);
}
BigInt& BigInt::operator+=(const BigInt& bg)
{
	int sizeDiff;
	if (number.size() < bg.number.size())
		sizeDiff = bg.number.size() - number.size();
	else
		sizeDiff = number.size() - bg.number.size();
	if (number.size() < bg.number.size())
	{
		vector<int> tempNum = bg.number;
		for (int i = bg.number.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
		number = tempNum;
	}
	else if (number.size() > bg.number.size())
	{
		for (int i = number.size() - 1; i >= sizeDiff; i--)
		{
			number[i] += bg.number[i - sizeDiff];
			if (number[i] >= 10)
			{
				number[i] -= 10;
				number[i - 1]++;
			}
		}
	}
	else
	{

		for (int i = number.size() - 1; i >= 0; --i)
		{
			number[i] += bg.number[i];
			if (i != 0)
				if (number[i] >= 10)
				{
					number[i] -= 10;
					number[i - 1]++;
				}
		}
	}
	return *this;
}
BigInt& BigInt::operator+=(const int& num)
{
	int temp = num;
	int myMultiply = 1;
	int numSize = 1;
	vector<int> numVec;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	int sizeDiff;
	if (number.size() < numVec.size())
		sizeDiff = numVec.size() - number.size();
	else
		sizeDiff = number.size() - numVec.size();

	if (number.size() < numVec.size())
	{
		vector<int> tempNum;
		tempNum = numVec;
		for (int i = numVec.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
		number = tempNum;
	}
	else if (number.size() > numVec.size())
	{
		for (int i = number.size() - 1; i >= sizeDiff; i--)
		{
			number[i] += numVec[i - sizeDiff];
			if (number[i] >= 10)
			{
				number[i] -= 10;
				number[i - 1]++;
			}
		}
	}
	else
	{

		for (int i = number.size() - 1; i >= 0; i--)
		{
			number[i] += numVec[i];
			if (i != 0)
				if (number[i] >= 10)
				{
					number[i] -= 10;
					number[i - 1]++;
				}
		}
	}
	return *this;
}
BigInt& operator+=(const int& num, BigInt& bg)
{
	int temp = num;
	int myMultiply = 1;
	int numSize = 1;
	vector<int> numVec;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	int sizeDiff;
	if (bg.number.size() < numVec.size())
		sizeDiff = numVec.size() - bg.number.size();
	else
		sizeDiff = bg.number.size() - numVec.size();

	if (bg.number.size() < numVec.size())
	{
		vector<int> tempNum;
		tempNum = numVec;
		for (int i = numVec.size() - 1; i >= sizeDiff; i--)
		{
			tempNum[i] += bg.number[i - sizeDiff];
			if (tempNum[i] >= 10)
			{
				tempNum[i] -= 10;
				tempNum[i - 1]++;
			}
		}
		bg.number = tempNum;
	}
	else if (bg.number.size() > numVec.size())
	{
		for (int i = bg.number.size() - 1; i >= sizeDiff; i--)
		{
			bg.number[i] += numVec[i - sizeDiff];
			if (bg.number[i] >= 10)
			{
				bg.number[i] -= 10;
				bg.number[i - 1]++;
			}
		}
	}
	else
	{

		for (int i = bg.number.size() - 1; i >= 0; i--)
		{
			bg.number[i] += numVec[i];
			if (i != 0)
				if (bg.number[i] >= 10)
				{
					bg.number[i] -= 10;
					bg.number[i - 1]++;
				}
		}
	}
	return bg;
}
bool BigInt::operator==(const BigInt& bg)const
{
	if (number.size() > bg.number.size())
		return false;
	else if (number.size() < bg.number.size())
		return false;
	else
	{
		for (int i = number.size() - 1; i >= 0; i--)
		{
			if (number[i] == bg.number[i])
				if (i == 0)
					return true;
				else
					return false;
		}
	}

}
bool BigInt::operator==(const int& num)const
{
	int temp = num;
	int myMultiply = 1;
	vector<int> numVec;
	vector<int> tempNum;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	if (number.size() > numVec.size())
		return false;
	else if (number.size() < numVec.size())
		return false;
	else
	{
		for (int i = number.size() - 1; i >= 0; i--)
		{
			if (number[i] == numVec[i])
			{
				if (i == 0)
					return true;
			}
			else
				return false;
		}
	}

}
bool operator==(const int& num, BigInt& bg)
{
	int temp = num;
	int myMultiply = 1;
	vector<int> numVec;
	vector<int> tempNum;
	do
	{
		myMultiply *= 10;
		temp /= 10;
	} while (temp / 10);
	temp = num;
	while (myMultiply)
	{
		temp /= myMultiply;
		numVec.push_back(temp);
		temp = num % myMultiply;
		myMultiply /= 10;
	}
	if (bg.getNumber().size() > numVec.size())
		return false;
	else if (bg.getNumber().size() < numVec.size())
		return false;
	else
	{
		for (int i = bg.getNumber().size() - 1; i >= 0; i--)
		{
			if (bg.getNumber()[i] == numVec[i])
			{
				if (i == 0)
					return true;
			}
			else
				return false;
		}
	}
}
ostream& operator<<(ostream& out,const BigInt& bg)
{
	for (int i = 0; i < bg.number.size(); i++)
	{
		out << bg.number[i];
	}
	return out;
}
istream& operator >> (istream& in, BigInt& bg)
{
	string in_str;
	in >> in_str;
	for (int i = 0; i < bg.number.size(); i++)
		bg.number.pop_back();
	for (int i = 0; i < in_str.length(); i++)
		bg.number.push_back(in_str[i] - 48);
	return in;
}
int main()
{
	BigInt bg1;
	cout << bg1 <<endl;
	cin >> bg1;
	cout << bg1 << endl;
	vector<int> bigNum;
	bigNum.push_back(9);
	bigNum.push_back(2);
	bigNum.push_back(3);
	bigNum.push_back(4);
	bigNum.push_back(5);
	BigInt I("923580"), integ(bigNum), BI("933695");
	cout << I << "\n" << /*integ <<"\n"<<*/ BI << endl;
	//cout << I + integ << endl;
	//cout << integ + I << endl;
	cout << integ + integ << endl;
	cout << I + BI << endl;
	cout << I + 9642456 << endl;
	cout << 9642456 + I << endl;
	I += BI;
	cout << I << "\n";
	BI += I;
	cout << BI << "\n";
	I += 1020;
	cout << "I= " << I << "\n";
	1020 += I;
	cout << I << "\n";
	cout << (I == BI) << endl;
	cout << (I == I) << endl;
	cout << (I == 1000) << endl;
	cout << (I == 59522222) << endl;
	cout << (1000 == I) << endl;
	cout << (59522222 == I) << endl;
	cout << (18582295 == I) << endl;
	cout << "end" << endl;
	return 0;
}