#include<iostream>
using namespace std;

int main() {
	try {
		int fathersAge = 40;
		int sonsAge = 60;
		if (sonsAge > fathersAge)
		{
			throw 401;
		}
	}
		catch (int x) {
			std::cout << "son cannot be older than father. ERROR: " << x << endl;
		}
	
	system("pause");

}