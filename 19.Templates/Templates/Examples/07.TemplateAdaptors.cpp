#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Cat
{
public:
	Cat() {};
	void makeCatMeow() {
		cout << catnoise.c_str() << endl;
	}
	~Cat() {};

private:
	string catnoise = "meow meow";
};

class Dog
{
public:
	Dog() {};
	void makeDogBark()
	{
		cout << dognoise.c_str() << endl;
	}
	~Dog() {};

private:
	string dognoise = "wof wof";
};

class Horse
{
public:
	Horse()
	{
	}
	void makeHorseNay() {
		cout << horsenoise.c_str() << endl;
	}
	~Horse()
	{
	}

private:
	string horsenoise = "nay nay";
};

class Frog
{
public:
	Frog()
	{
	}
	void makeFrogCroak()
	{
		cout << fragnoise.c_str() << endl;
	}
	~Frog()
	{
	}

private:
	string fragnoise = "croak croak";
};

class AnimalInterface
{
public:
	virtual ~AnimalInterface() {};
	virtual void execute() = 0;
};

template <class Type>
class AnimalAdaptor : public AnimalInterface
{
public:
	AnimalAdaptor(Type *obj, void(Type::* m)()) {
		animalObject = obj;
		animalFunction = m;
	}
	~AnimalAdaptor()
	{
		delete animalObject;
	}
	//Implement AnimalInterface pure virtual function.
	void execute()
	{
		(animalObject->*animalFunction)();
	}

private:
	//Members to hold object and function pointers
	Type* animalObject;
	void(Type:: *animalFunction)();
};


int main()
{
	AnimalAdaptor<Cat> cata(new Cat(), &Cat::makeCatMeow);
	cata.execute();

	AnimalAdaptor<Dog> doga(new Dog(), &Dog::makeDogBark);
	doga.execute();

	AnimalAdaptor<Horse> horsea(new Horse(), &Horse::makeHorseNay);
	horsea.execute();

	AnimalAdaptor<Frog> froga(new Frog(), &Frog::makeFrogCroak);
	froga.execute();

}