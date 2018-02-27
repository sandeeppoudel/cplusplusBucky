#include<iostream>
using namespace std;
/*
creating template function having more than one generic types enable to accept different types of
parameter at once by creating multiple generic classes.
Function templates are special functions that can operate with generic types.
This allows us to create a function template whose functionality can be adapted to more than one 
type or class without repeating the entire code for each type. http://www.cplusplus.com/doc/oldtutorial/templates/
*/
template<class testTemplate , class test2Template >
testTemplate add(testTemplate c,test2Template e)   //the return type is testTemplate which represented int 
{                                                  //while recieving so it truncates double value to 
	                                               //while returning i.e.int.
	return(c<e?c:e);
}

int main() {

	int a = 93;
	double d = 34.456;
	std::cout << add(a, d) << endl;

	std::system("pause");
}