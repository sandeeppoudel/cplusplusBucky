#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*
we see random numbers as if computer is automatically generating random numbers. But in  
reality the computer follows very complex algorithm to generate random numbers. once we 
command to create random numbers for certain condition it generates same patterns every 
time we compile. to create random numbers different every time we compile we need to use 
srand() command and to be more complex and specific we need to provide the valure or variable for srand() 
the time of our device so we are including ctime library above.

*/
int main() {

	srand(time(0));
	for (int i = 1; i <= 25;  i++)
	{
		
		cout << 1+(rand()%6) << endl;
		//cout << rand() << endl;
	}

	system("pause");
	return 0;

}