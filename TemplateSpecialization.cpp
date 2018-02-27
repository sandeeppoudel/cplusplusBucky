#include<iostream>
#include<string>
using namespace std;
template<class T1>
class one {
public:
	one(T1 a) {
		std::cout << a  << endl;
	}
};
template<>
class one<char> {
public:
	one(string c) {
		std::cout << c << endl;
	}
};
int main() {
	one<int> object(23);
	one<double> object1(23.465);
	one<string> object2("sandeep");


	system("pause");
}