#include<iostream>
using namespace std;

int main() {

	int age = 16;
	switch (age)
	{
	case 16: {
		cout << "you can drive now." << endl;
		break;
	}
	case 18: {
		cout << "bring some lottery home." << endl;
		break;
	}
	case 23: {
		cout << "bring me some beer." << endl;
		break;
	}
	default:
		cout << "we are sorry.Try again" << endl;
		
	}


	system("pause");
	return 0;

}