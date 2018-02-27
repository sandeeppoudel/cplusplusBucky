#include "constobject.h"
#include<iostream>
using namespace std;


constobject::constobject()
{
}


void constobject::regularFunction()
{
	cout << "nepal is a beautiful country." << endl;
}
 void constobject::constFunction() const
{
	cout << "i am a constant function. nepal is a beautiful country." << endl;
}