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
	refCounter():count(1)
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
	~refCounter(){}
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

class SSOString: public refCounter
{
public:
	SSOString():strBeg(NULL){}
	SSOString(const char* strptr) :strSize(strlen(strptr)) {
		if (strSize < 16) {
			//< 16 chars store in array
			memcpy(&str[0], strptr, strSize + 1);
			strBeg = NULL;
		}
		else
		{
			// > 16 chars allocate on heap.
			strBeg = new char[strSize + 1];
			memcpy(strBeg, strptr, strSize + 1);
		}
	}
	char* begin() {
		return strSize < 16 ? &str[0] : strBeg;
	}
	char* end() {
		return begin() + strSize;
	}
	unsigned length() const {
		return strSize;
	}
	~SSOString()
	{
		if (strBeg) {
			delete[] strBeg;
		}
	}
private:
	unsigned strSize;
	char* strBeg;
	char str[16];
};

int main()
{
	//Create referenced object.
	ReferencedObject<SSOString> ref(new SSOString("Hello World!!"));//13 chars
	ReferencedObject<SSOString> ref16(new SSOString("This is string is over 16 characters long so allocated on heap"));

	//Indirection access 
	cout << "ref value is " << ref->begin() << " with size " << ref->length() << "\n\n";
	cout << "ref16 value is " << ref16->begin() << " with size " << ref16->length() << "\n\n";
	
	ReferencedObject<SSOString> refCopy(new SSOString());
	refCopy = ref;
	cout << "refCopy value is " << refCopy->begin() << "\n\n";

	ReferencedObject<SSOString> ref16Copy(new SSOString());
	ref16Copy = ref16;

	cout << "refCopy value is " << refCopy->begin() << "\n\n";
	cout << "ref16Copy value is " << ref16Copy->begin() << "\n\n";
	
    return 0;
}

