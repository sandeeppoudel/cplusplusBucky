#include<iostream>
using namespace std;
int volume(int l=1,int b=1, int h=1);

int main() {

	
	cout << volume() << endl;
	cout << volume(3) << endl;
	cout << volume(3, 3) << endl;
	cout << volume(3, 3, 3) << endl;

	system("pause");
	return 0;

}

  int volume(int l , int b , int h ) {
	int vol;
	vol = l*b*h;
	return vol;
} 