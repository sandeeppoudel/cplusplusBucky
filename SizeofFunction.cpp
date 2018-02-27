#include<iostream>
using namespace std;

int main() {
	char b = 9;
	int a = 34;
	double c = 234554;
	float d = 34.4353;
	double Array[10];
	cout << sizeof(b) << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(Array) << endl;
	cout << sizeof(Array)/sizeof(Array[0]) << endl;
	system("pause");
	return 0;

}