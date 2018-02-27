#include<iostream>
#include "constobject.h"
using namespace std;

int main() {
	 constobject testObject1;
	const constobject testObject2;     
	testObject1.regularFunction();      //we can't access constant function from regular object. we need to create a 
	                                    // constant funciton  to access or call the constant function.
	testObject2.constFunction();
	testObject1.constFunction();        // but regualar object can access the constant function.
	system("pause");
		return 0;

}