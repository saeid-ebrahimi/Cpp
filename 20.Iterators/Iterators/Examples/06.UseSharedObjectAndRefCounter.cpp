// Iterators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

template< class referencedObject>
class ReferencedObject {

private:
	
	//The object being referenced.
	referencedObject *refObject;
	//Private destructor throws exception.
	void destructor() throw () {
		int cnt = refObject->decreaseCount();
		if (refObject != NULL && cnt == 0) {
			cout << "referenced object pointer being deleted. \n";
			delete refObject;
			refObject = NULL;
		}
	}

public:
	//Empty dummy class to throw
	class classToThrow {};

	//Constructor
	ReferencedObject(referencedObject *newObj = NULL) : refObject(newObj) {}
	//copy constructor
	ReferencedObject(const ReferencedObject<referencedObject>& ro) :refObject(ro.refObject) {
		// add increament ther reference count 
		refObject->increaseCount();
	}
	//Invocation operator
	referencedObject* operator-> () throw (classToThrow) {
		if (!refObject) {
			throw classToThrow();
		}
		return refObject;
	}
	//Inderection operator
	referencedObject& operator*() throw(classToThrow)
	{
		if (!refObject)
		{
			throw classToThrow();
		}
		return *refObject;
	}
	ReferencedObject <referencedObject > &operator= (ReferencedObject< referencedObject > &rhs) {

		//Check if same object if so return.
		if (this == &rhs) {
			return *this;
		}

		//Increment reference count.
		if (rhs.refObject) {
			rhs.refObject->increaseCount();
		}

		//Destroy current refObject which decrease reference count.
		destructor();

		//Assign new refObject to private member refObject.
		refObject = rhs.refObject;

		//Return object.
		return *this;
	}

	//Destructor calls private destructor which can throw exception from delete.
	~ReferencedObject <referencedObject>() {
		cout << "ReferencedObject destructor called \n";
		destructor();
	}
};

// Reference counter base class
class refCounter
{
public:
	//Constructor initialis count to 1.
	refCounter() : count(1) {}

	//Increment count variable
	void increaseCount() {
		count++;
		cout << "increaseCount called count is " << count << "\n";
	}

	//Decrement count variable.
	int decreaseCount() {
		--count;
		cout << "decreaseCount called count is " << count << "\n";
		return count;
	}
private:
	int count;
};
class SharedObject : public refCounter
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
		return value;
	}
	~SharedObject()
	{
		std::cout << "SharedObject destroyed" << std::endl;
	}
private:
	int value=8;
};
int main()
{
	// Create referenced object.
	ReferencedObject<SharedObject> ref(new SharedObject());
	//Invocation access 
	ref->SharedObjectAccess("Hello World!!");
	cout << "copying ref will increase counter \n";
	ReferencedObject<SharedObject> ref2(new SharedObject());
	ref2 = ref;
	//Invocation access
	ref2->SharedObjectAccess("Hello from ref2");
	//Indirection access
	cout << "ref val called via indirection operator is " << (*ref).getVal() << "\n\n";


}