#include<iostream>
using namespace std;

class testThisKeyword {
public:
	int height;
	void test(int h) {
		height = h;
		cout << "height= " << height << endl;
		cout << "height= " << this->height << endl;
		cout << "height= " << (*this).height << endl;
	}
private:
	int nepal = 8848;


};
int main() {

	testThisKeyword testObject;
	testObject.test(6);

	system("pause");
	return 0;
}