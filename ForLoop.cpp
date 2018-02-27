#include<iostream>
#include<cmath>
using namespace std;

int main() {

	//For Loop
	float principal = 10000;
	float ratedaily = 0.001;
	float amount;
	for (int i = 1; i <=20; i++)
	{
	  	
		amount = principal* pow(1 + ratedaily,i);
		cout << "Day " << i << "------" << amount<<endl;
	}


	system("pause");
	return 0;


}