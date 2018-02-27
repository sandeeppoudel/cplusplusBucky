#include<iostream>
#include<string> 
using namespace std;


class SandeepClass {
public:
	string grade;     

	 SandeepClass(string s) {
		 setName(s);
		 
	} 
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
	

	SandeepClass Object("nepal");
	Object.grade = "BBS";
	SandeepClass Object2("Kathmandu");
	Object2.grade = "Master Degree";
	cout << Object.grade << endl;
	cout << Object2.grade << endl;
	

	SandeepClass SandeepObject("Nepal is a beautiful country.");
	cout << SandeepObject.getName() << endl;
	SandeepClass SandeepObject2("Heaven is myth, Nepal is real.");
	cout << SandeepObject2.getName() << endl;
	
	/*
	each time we assign a new value to the variable through different objects  
	one assignment doesn't overwrite another one. each value are stored for each object created.
	
	
	
	*/
	cout << SandeepObject2.getName() << endl;
	cout << SandeepObject.getName() << endl;

	system("pause");
	return 0;



}