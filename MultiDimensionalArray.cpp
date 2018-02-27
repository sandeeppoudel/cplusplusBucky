#include<iostream>
using namespace std;

int main() {

	/*
	int mdArray[3][4] = { {23,36,57,69},{45,65,73,46},{34,35,26,55} };
	cout << mdArray[0][2] << endl;
	*/
	int mdArray[3][4] = { { 23,36,57,69 },{ 45,65,73,46 },{ 34,35,26,55 } };
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 4; ii++)
		{
			cout << mdArray[i][ii] << "  ";

		}
		cout << endl;
	}


	system("pause");
	return 0;
}