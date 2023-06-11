
#include "stdafx.h"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
struct Book
{
	int ISBN;
	char name[30];
	int price;

};
void readBook(vector<Book>& books)
{
	for (int i = 0; i < books.size(); i++)
	{
		cout << "book number #" << i + 1 << " chracteristics: "<<endl;
		cout << "enter the name : ";
		cin >> books[i].name;
		cout << "enter the ISBN : ";
		cin >> books[i].ISBN;
		cout << "enter the price: ";
		cin >> books[i].price;
		
	}
}
void sortByPriceDec(vector<Book>& books)
{
	int vec_size = books.size();
	for (int i = 0; i < vec_size -1; i++)
	{
		for (int j = i+1 ; j < vec_size; j++)
		{
			if (books[i].price < books[j].price)
			{
				Book temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
}
int compare_name(char* name1, char* name2)
{
	while (*name2 && *name1 && *name1 == *name2)
	{
		name1++;
		name2++;

	}
	if (*name1 > *name2)
		return 1;
	else if (*name1 < *name2)
		return -1;
	else
		return 0;
}
void sortByNameDec(vector<Book>& books)
{
	int vec_size = books.size();
	for (int i = 0; i < vec_size -1 ; i++)
	{
		for (int j = 0; j < vec_size; j++)
		{
			if (compare_name(books[j].name,books[i].name))
			{
				Book temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}	
		}
	}
}
void deleteBookByISBN(vector<Book>& books, int myISBN)
{
	int index;
	int vec_size = books.size();
	for (int i = 0; i < vec_size; i++)
	{
		if (books[i].ISBN = myISBN)
			index = i;
	}
	for (int i = index; i < vec_size -1; i++)
	{
		books[i] = books[i + 1];
	}
	books.pop_back();
}
void printBooks(vector<Book> books)
{
	cout << "ISBNs\t" << "Names\t" << "Prices\n"; 
	cout << "*****\t" << "*****\t" << "*****\n";
	for (int i = 0; i < books.size(); i++)
	{
		cout << books[i].ISBN << '\t';
		cout << books[i].name << '\t';
		cout << books[i].price << '\n';
	}
}
int main()
{
	vector<Book> books(3);
	readBook(books);
	sortByNameDec(books);
	printBooks(books);
	sortByPriceDec(books);
	printBooks(books);
}