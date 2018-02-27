#include<iostream>
using namespace std;

int main() {

	int testMemoryAddress = 34;
	cout << &testMemoryAddress<< endl;
	int *testPointer = &testMemoryAddress;
	cout << testPointer << endl;

	system("pause");
	return 0;


}