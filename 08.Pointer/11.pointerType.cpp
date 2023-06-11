// ClassExamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "func.h"
#include <string>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::string;
class person
{
public:
	person(int _age ,int _height,int _weight,string _name);
	int age;
	int height;
	int weight;
	string name;

private:
	


};
void modifyPerson(person per)
{
	per.age = 20;
	per.height = 180; 
	per.weight = 80;
	per.name = "Ali";
}
void modifyPerson(person* per)
{
	per->age = 20;
	per->height = 180;
	per->weight = 80;
	per->name = "Ali";
}
person::person(int _age = 10, int _height = 100, int _weight = 30, string _name = "ahmad")
{
	age = _age;
	height = _height;
	weight = _weight;
	name = _name;
}

void passByValue(int num)
{
	cout << "we are in passByValue func!" << endl;
	num+= 12;
	cout << num << endl;
}
void passByRef(int* num)
{
	cout << "we are in passByRef func!" << endl;
	*num = 50;
	cout << *num << endl;
}
int main()
{
	int num1;
	int num2;
	int* pNum = &num2;
	num1 = 3;
	passByValue(num1);
	cout << num1 << endl;
	*pNum = 5 ;
	passByRef(pNum);
	cout << *pNum << endl;
	double* pDNum = new double;
	double* pDNum2 = new double(10.36);
	// double& rNum = new double; //ERROR
	*pDNum = 10.6;
	cout << *pDNum << endl;
	delete pDNum;
	cout << pDNum << endl;
	delete pDNum2;
	person stu;
	cout << stu.age << stu.name << endl;
	modifyPerson(stu);
	cout << stu.age << stu.name << endl;
	person* emp = new person();
	cout << emp->age << emp->name << endl;
	modifyPerson(emp);
	cout << emp->age << emp->name << endl;


}
