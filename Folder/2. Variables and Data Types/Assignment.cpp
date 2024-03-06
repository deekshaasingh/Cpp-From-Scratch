/* Question 1. Explain the concept of DataTypes and Variables. 
Write one example program to demonstrate the same.

A data type is an attribute associated with a piece of data that tells
a computer system how to interpret its value. There are five main types:
1. int 
2. float 
3. bool 
4. double
5. char

# program: */

#include <iostream>
using namespace std;

int main()
{
	int val1 = 45;
	float val2 = 56.76;
	bool tv = true;
	bool fv = false;
	double val3 = 4574.87543;
	char val4 = 'W';
	string val5 = "Hello, My name is Shasha!";
	
	cout<<"Integer value is "<<val1<<endl;
	cout<<"Float value is "<<val2<<endl;
	cout<<"Boolean value is "<<tv<<"and"<<fv<<endl;
	cout<<"Double value is "<<val3<<endl;
	cout<<"Char value is "<<val4<<endl;
	cout<<"String value is "<<val5;
}

