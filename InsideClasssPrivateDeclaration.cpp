#include<iostream>
 #include<string> 
using namespace std;


class SandeepClass{
   public:
	   string getName() {

		   return name;

	   }

	void setName(string x) {
		name = x;


   }
	
	

  private:
	string name;


};



int main() {


	SandeepClass SandeepObject;
	SandeepObject.setName("Sandeep Poudel");
		cout << SandeepObject.getName() << endl;
	system("pause");
	return 0;



}
