#include "stdafx.h"
#include <iostream>

using std::cout;  //using directive instead of using namespace std since only need cout.

				  //Namespace 1
namespace namespaceName {
	class MyClass
	{
	public:
		MyClass();
		~MyClass();

	private:

	};
	int function1() {
		return 1562;
	}
	
	int spacialNum = 1782;
	

}
namespaceName::MyClass::MyClass() {}

using namespaceName::MyClass;
MyClass::~MyClass(){}
namespace ABC {
	
	void doABC() {
		cout << "doABC() \n";
	}
}

//Namespace 2
namespace DEF {

	void doDEF() {
		cout << "doDEF() \n";
	}
}

//Combined namespace
namespace ABCDEF {
	using namespace ABC;
	using namespace DEF;
}
namespace outer {
	int p = 182;
	namespace inner {
		float num = 12.08f;
	}
}
//Main function.
int main(int argc, char* argv[]) {
	MyClass mc1();
	cout << typeid(mc1).name() << std::endl;
	ABCDEF::doABC();
	ABCDEF::doDEF();
	cout << outer::p << std::endl;
	cout << outer::inner::num << std::endl;
	using outer::inner::num;
	cout << num << std::endl;
	return 0;
}