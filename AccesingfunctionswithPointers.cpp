#include<iostream>
#include"AccessthroughPointer.h"
using namespace std;

int main() {

	AccessthroughPointer testObject;
	testObject.PrintoutSomething();
	AccessthroughPointer *testObjectPointer = &testObject;
	testObjectPointer -> PrintoutSomething();  //-> it is called arrow member selection operator.



	system("pause");
	return 0;

}