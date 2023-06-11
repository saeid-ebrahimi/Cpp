// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;
template <class TempContainer>
class VecScopeGuard {
public:
	VecScopeGuard(TempContainer* vecptr) : engaged_(true), vecptr_(vecptr) {}
	~VecScopeGuard() {
		if (engaged_)
		{
			//Remove last vector entry
			vecptr_->pop_back();
		}
	}
	void disengage() 
	{
		engaged_ = false;
		//Vectors updated so release guard
	}
private:
	bool engaged_;
	TempContainer* vecptr_;
};
int main()
{
	vector<string> firstvector;
	vector<string> secondvector;
	string mystring("Hello world!");

	try {
		firstvector.push_back(mystring);
		VecScopeGuard<vector<string>> guard1(&firstvector);
		secondvector.push_back(mystring);
		VecScopeGuard<vector<string>> guard2(&secondvector);
		guard1.disengage();
		guard2.disengage();
	}
	catch (...) {
		cout << "Caught error." << endl;
	}
	cout << "First use of scope guards ok, first vector size is " << firstvector.size()
		 << " second vector size is " << secondvector.size() << endl;
	//Clear vectors.
	firstvector.clear();
	secondvector.clear();
	try {
		firstvector.push_back(mystring);
		VecScopeGuard<vector<string>> guard1(&firstvector);
		bad_alloc excp;
		throw excp; //Replicate error updating second vector.
		secondvector.push_back(mystring);
		VecScopeGuard<std::vector<std::string>>	guard2(&secondvector);
		guard1.disengage();
		guard2.disengage();
	}
	catch (std::bad_alloc e) {
		cout << "Caught exception " << endl;
		cout << "Second use of scope guards error, first vector size is " 
			 << firstvector.size() << " second vector size is " 
			 << secondvector.size() << endl;
	}
	return 0;
}

