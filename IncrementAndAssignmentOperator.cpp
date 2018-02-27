#include<iostream>
using namespace std;
 
int main() {

	int testNumber=12;
/*	testNumber += 10;
	testNumber -= 10;
	testNumber *= 10;
	testNumber /= 10;
	testNumber %= 10;
	*/
	testNumber++;
	cout << testNumber++ << endl;
	cout << ++testNumber << endl;    //++ before the int variable first do increment operation and then gives the output
	                                 //instead ++ after the int variable first prints out the original value before increment and then do the increment operation.
	cout << testNumber << endl;
	system("pause");
	return 0;


}