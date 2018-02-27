#include<iostream>;
using namespace std;


 int  remainder(int a ) {
    
	int remainder = a % 2;
	return remainder;
	
}

int main() {
	int a;
	cout << "enter a number";
	cin >> a; 
	
cout << "remainder when divided by 2 is " << remainder(a) << endl;
system("pause");
return 0;
}


