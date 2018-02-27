#include<iostream>
using namespace std;
void PassbyValue(int a);
void PassbyReference(int *a);
int main() {


	int testNumber = 57;
	int testNumber2 = 57;
	 PassbyValue(testNumber);
	 PassbyReference(&testNumber2);
	 cout << testNumber << endl;
	 cout << testNumber2 << endl;
	system("pause");
	return 0;


}
void PassbyValue(int a) {
	a = 37;

}
void PassbyReference(int *a) {
	*a = 78;
}