
#include<iostream>
using namespace std;
int
factorial(int a) {
	if (a==1)
	{
		return 1;
	}
	else

	{
		return a*factorial(a - 1);
	}

}
int main() {
	int factorialNumber ;
	cout << "enter a positive integer to find its factorial value: ";
	cin >> factorialNumber;
	
	cout << "the factorial of given number is " << factorial(factorialNumber) << endl;
	system("pause");
	return 0;

}

