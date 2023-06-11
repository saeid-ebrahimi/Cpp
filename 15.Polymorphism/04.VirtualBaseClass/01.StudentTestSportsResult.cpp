#include "stdafx.h"
#include <iostream>

using namespace std;

class student {
	int rno;
public:

	void getnumber() {
		cout << "Enter Roll No:";
		cin >> rno;
	}

	void putnumber() {
		cout << "\n\n\tRoll No:" << rno << "\n";
	}
};

class test : virtual public  student {
public:
	int part1, part2;

	void getmarks() {
		cout << "Enter Marks\n";
		cout << "Part1:";
		cin >> part1;
		cout << "Part2:";
		cin >> part2;
	}

	void putmarks() {
		cout << "\tMarks Obtained\n";
		cout << "\n\tPart1:" << part1;
		cout << "\n\tPart2:" << part2;
	}
};

class sports : virtual public student {
public:
	int score;

	void getscore() {
		cout << "Enter Sports Score:";
		cin >> score;
	}

	void putscore() {
		cout << "\n\tSports Score is:" << score;
	}
};

class result : public test, public sports {
	int total;
public:

	void display() {
		total = part1 + part2 + score;
		putnumber();
		putmarks();
		putscore();
		cout << "\n\tTotal Score:" << total;
	}
};

void main() {
	result obj;

	obj.getnumber();
	obj.getmarks();
	obj.getscore();
	obj.display();
	cout << endl;
}