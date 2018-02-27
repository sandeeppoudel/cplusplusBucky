#include<iostream>
using namespace std;

int main() {

	int age = 35;
	int money = 500;
	if (age>21 && money>300)
	{
		cout << "you are welcome to our club. enjoy." << endl; // && this logical operator gives true only if all tests are true.
    }
	if (age>21 || money>300)    // || this double bar logical operator gives true for atleast one test true.
	{
		cout << "you are welcome to our club. enjoy."<<endl;
	}
	system("pause");
	return 0;

}