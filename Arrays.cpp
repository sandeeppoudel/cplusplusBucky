#include<iostream>
using namespace std;

int main() {

	/*  int testArray[5] = { 1,2,3,4,5 };  ///counting always starts for 0 in array. 1 is an array 
	                             //element while it lies at 0th postion so 0 is its array Index.
	cout << testArray[2] << endl;
	system("pause");
	return 0;
	*/
	cout << "Index" << "  -   " << "Element" << endl;
		int testArray[10];
	for (int i = 0;i<=9; i < i++)
	{
		testArray[i] = 100 + i;
		cout << i << "   ------   " << testArray[i] << endl;
		
	}
	system("pause");
	return 0;
}