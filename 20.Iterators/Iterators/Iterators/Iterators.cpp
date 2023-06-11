// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
class refCounter
{
public:
	refCounter() :count(1)
	{
		cout << "refCounter() called" << endl;
	}
	//Increment count variable
	void increaseCount()
	{
		count++;
		cout << "increaseCount called count is " << count << endl;
	}
	//Decrement count variable
	int decreaseCount() {
		--count;
		cout << "decreaseCount called count is " << count << endl;
		return count;
	}
	~refCounter() {}
private:
	int count;
};

template<class referencedObject>
class ReferencedObject {
private:
	//The object being referenced.
	referencedObject *refObject;

	//Private destructor throws exception.
	void destroctor()throw()
	{
		if (refObject != NULL && refObject->decreaseCount() == 0)
		{
			delete refObject;
			refObject = NULL;
		}
	}
public:
	//Empty dummy class to throw
	class classToThrow { };
	// counstructor 
	ReferencedObject(referencedObject *newObj = NULL) :refObject(newObj) {}
	// Inderection operator 
	referencedObject* operator->() throw(classToThrow)
	{
		if (!refObject)
		{
			throw classToThrow();
		}
		return refObject;
	}
	referencedObject& operator*()throw(classToThrow) {
		if (!refObject) {
			throw classToThrow();
		}
		return *refObject;
	}
	ReferencedObject<referencedObject>& operator= (ReferencedObject<referencedObject>& rhs)
	{
		// check if same object if so return.
		if (this == &rhs)
		{
			return *this;
		}
		// Increament reference count.
		if (rhs.refObject)
		{
			rhs.refObject->increaseCount();
		}
		// Destroy current refObject which decrease reference count
		destroctor();

		// Assign new refObject to private member refObject.
		refObject = rhs.refObject;
		//Return object.
		return *this;
	}
	//Destructor calls private destructor which can throw exception from delete 
	ReferencedObject<referencedObject>()
	{
		destroctor();
	}
};

class SharedObject
	:public refCounter
{
public:
	SharedObject()
	{
		cout << "SharedObject created" << endl;
	}
	void SharedObjectAccess(const char* src)
	{
		cout << "SharedObjectAccess called parameter argument is " << src << endl;
	}
	int getVal() {
		return val;
	}
	~SharedObject()
	{
		cout << "SharedObject destroyed" << endl;
	}

private:
	int val = 7;
};

int main()
{
	//Create referenced object.
	ReferencedObject<SharedObject> ref(new SharedObject());
	//Invocation access
	ref->SharedObjectAccess("Hello World !!!");
	
	cout << "\n\n copying ref will increase counter \n\n";
	ReferencedObject<SharedObject> ref2(new SharedObject());
	ref2 = ref;

	//Invocation access
	ref2->SharedObjectAccess("Hello World from ref2!!!");

	//Indirection access 
	cout << "ref value is " << (*ref).getVal() << "\n\n";

	
	return 0;
}

