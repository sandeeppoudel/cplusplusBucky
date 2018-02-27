#include<iostream>
using namespace std;


     void add() {
	int a = 56;
	int b = 34;
	int sum = a + b;
	cout << "sum:" << sum << endl;


}
 
int main() {

	add();
	system("pause");
	return 0;
}
  

/*You can also do as below :  

void  add();

int main() {

add();
system("pause");
return 0;
}
   
 void add() {
   int a = 56;
   int b = 34;
   int sum = a + b;
   cout << "sum:" << sum << endl;


   }
   */
 
   
   /* But you cannot  do as below :

  

   int main() {

   add();
   system("pause");
   return 0;
   }

   void add() {
   int a = 56;
   int b = 34;
   int sum = a + b;
   cout << "sum:" << sum << endl;


   }
   */
 
