#include<iostream>;
using namespace std;


int  sum(int a, int b) {

	int sum = a + b;
	return sum;

}

int main() {
	int a;
	int b;
	cout << "enter a number";
	cin >> a;
	cout << "enter another number";
	cin >> b;


	cout << "Sum of two number  is " << sum(a,b) << endl;
	system("pause");
	return 0;
}


