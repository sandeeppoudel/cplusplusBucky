#include<iostream>
using namespace std;

class TestClass {
public:
	void printSomething() {

		cout << "i am printed on the screen." << endl;
 }


};
  
int main() {

	TestClass testObject;
	testObject.printSomething();
	system("pause");
	return 0;



}