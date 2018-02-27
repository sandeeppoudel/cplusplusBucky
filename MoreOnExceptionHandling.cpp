#include<iostream>
#include<exception>
using namespace std;
int main() {
	int a;
	int b;
	std::cout << "enter first number: ";
	std::cin >> a;
	std::cout << "enter second number: ";
	std::cin >> b;
	/*try
	{
		
		if (a!=0)
		{
			std::cout << "b/a is " << b / a << endl;
		}
		else {
			throw std::bad_alloc();
		}
	}
	catch (const std::exception&)
	{
		cout << "ERROR " << "you can't divide anything by zero idiot."<<endl;
	}  */
	try
	{

		if (a != 0)
		{
			std::cout << "b/a is " << b / a << endl;
		}
		else {
			throw 4;
		}
	}
	catch (...)     //only three dots no more than that. it can accept any arguments but cannot implement that.
	{
		cout << "ERROR " << "you can't divide anything by zero idiot." << endl;
	}
	system("pause");
}
