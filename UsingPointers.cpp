#include<iostream>
using namespace std;

int main() {

	int testArray[6];
	int *pointer1 = &testArray[0];
	int *pointer2 = &testArray[1];
	int *pointer3 = &testArray[2];

	cout << "Address of element 1 is " << &testArray[0] << endl;
	cout << "Address of element 2 is " << &testArray[1] << endl;
	cout << "Address of element 3 is " << &testArray[2] << endl;
	cout << "ponter1 is pointing to address " << pointer1 << endl;
	cout << "ponter2 is pointing to address " << pointer2 << endl;
	cout << "ponter3 is pointing to address " << pointer3 << endl;
	pointer1 += 2;

	cout << "Address of element 1 is now " << &testArray[0] << endl;
	cout << "Address of element 2 is now " << &testArray[1] << endl;
	cout << "Address of element 3 is now" << &testArray[2] << endl;
	cout << "ponter1 is pointing to address" << pointer1 << endl;
	cout << "ponter2 is pointing to address" << pointer2 << endl;
	cout << "ponter3 is pointing to address" << pointer3 << endl;

	pointer1 ++;

	cout << "Address of element 1 is " << &testArray[0] << endl;
	cout << "Address of element 2 is " << &testArray[1] << endl;
	cout << "Address of element 3 is " << &testArray[2] << endl;
	cout << "ponter1 is pointing to address" << pointer1 << endl;
	cout << "ponter2 is pointing to address" << pointer2 << endl;
	cout << "ponter3 is pointing to address" << pointer3 << endl;

	system("pause");
	return 0;

}


/*
from the above program we conclude that the pointer can't change the address of an element 
and the arithmetic operation upon pointers is not what we do with integers. it instruct the pointer to point to new memory 
address according to the integer involved in the operation.
Also we can create many pointers for same variable or same memory addresses all which will point to same memory address.




*/