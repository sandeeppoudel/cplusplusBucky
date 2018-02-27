#include<iostream>
#include<cmath>
using namespace std;
void printOut(int x) {

	cout << "i am printing an integer " << x << endl;
}
void printOut(float x) {

	cout << "i am printing a float value " << x << endl;
}
int main() {
	float a;
	cout << "enter a number";
	cin >> a;
	int b = round(a);
	if (a == round(a))
	{
		printOut(b);
	}
	else
	{
		printOut(a);
	}

	
	
	system("pause");
	return 0;

}