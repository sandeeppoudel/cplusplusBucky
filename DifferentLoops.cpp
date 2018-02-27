#include<iostream>
using namespace std;

int main() {

/*	int rame = 0;
	//While Loop:
	while (rame<5)
	{
		cout << rame + 1 << ".Rame" << endl;
		//rame += 1;
		//rame = rame+1;
		rame++;
	}
	*/
/*	cout << "Enter 5 numbers"<< endl;
	int x = 1;
	int sum=0 ;
	while (x<=5)
	{
		int number;
		cin >> number;
		
		sum += number;
		x++;
	}
	cout << "The sum of given five numbers is "<< sum << endl;
	*/
	int numberOfPeople=0;
	int age;
	int ageTotal=0;
	cout << "Enter the first person's age or -1 to exit" << endl;
	cin >> age;
	while (age != -1)
	{
		ageTotal += age;
		numberOfPeople++;
		cout << "Enter the next person's age or -1 to exit" << endl;
		cin >> age;
		

	}
	cout << "Number of People: " << numberOfPeople << endl;

	cout << "The average age of above people i s " << ageTotal / numberOfPeople << endl;
	system("pause");
	return 0;

}