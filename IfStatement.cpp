#include<iostream>
#include<string>
using namespace std;
//if or if else statement inside if or if else statement is known as nesting.Thank you.
int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age > 60)
	{
		if (age < 100) {
			cout << "you have become oldie goldie now. Take a rest." << endl;
		}
		else
		{
			string answer;
			cout << "You are too old. Why are you still alive?Give the reason." << endl;
			cin >> answer;
			cout << "Thank you." << endl;
			
		}
	}
	else
	{
		cout << "You are young, do a job." << endl;

	}
	system("pause");
	return 0;

}