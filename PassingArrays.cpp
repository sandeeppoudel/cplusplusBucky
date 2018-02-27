#include<iostream>
using namespace std;
void printArray(int getArray[], int sizeofArray);
int main() {

	int Array1[5] = { 12,13,14,15,16 };
	int Array2[7] = { 21,22,23,24,233,245,267 };
	printArray(Array1, 5);
	printArray(Array2, 7);
	system("pause");
	return 0;

}
void printArray( int getArray[], int sizeofArray) {  //[] this indicates that it can accept array of any size.
	for (int i = 0; i < sizeofArray; i++)
	{
		cout << getArray[i] << endl;
	}
}
