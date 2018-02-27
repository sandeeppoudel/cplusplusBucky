#include<iostream>
//using namespace std;
template<class T>       //http://www.cplusplus.com/doc/oldtutorial/templates/
class test {
	T var1, var2;
public:
	test(T a,T b) {
		var1 = a;
		var2 = b;
	}
	T getBigger() {
		return(var1 > var2 ? var1 : var2);
	}
	T getSmaller();
};

template<class T>               //for every function defined outside class we need to write this above the function definition.
T test<T>::getSmaller() {        //to define function outside class along with template class follows 
	return(var1 < var2 ? var1 : var2);  //the syntax as it is shown aside.
}

int main() {
	test <int> t(24,35);
	std::cout << t.getBigger()<< std::endl;
	std::cout << t.getSmaller() << std::endl;
	std::system("pause");
}