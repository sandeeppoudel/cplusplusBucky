#include<iostream>
using namespace std;
/*
Templates are a feature of the C++ programming language that allows functions and classes to operate
with generic types. This allows a function or class to work on many different data types without being 
rewritten for each one.
*/
template <class testTemplate>
testTemplate add(testTemplate a, testTemplate b, testTemplate c) {
	return a + b + c;
}
int main() {
	int a = 2, b = 3, c = 4;
	double d = 3.4, e = 4.4, f = 5.6;
	std::cout << add(a, b, c) << endl;
	std::cout << add(d,e,f) << endl;
	std::system("pause");

}