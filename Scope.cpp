#include<iostream>
using namespace std;
int san = 18;  //global variable.
void scopeTest();
int main() {


	double san = 189;  //local variable
	cout << san << endl;  //it first prioriotize the local variable over global variable.
	cout << ::san << endl;  //:: here is t is called unary scope resolution operator which instruct to use global variable over local variable.
	scopeTest();
	system("pause");
	return 0;


}
void scopeTest() {
	cout << san << endl;



}