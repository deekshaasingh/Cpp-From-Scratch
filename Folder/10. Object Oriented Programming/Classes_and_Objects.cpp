#include <iostream>
#include <string>

using namespace std;

class First{
public: // access specifier
int i;  // integer attribute
string s; // string attribute
};

int main(){
	First obj; // creating object
	obj.i = 18; // storing 18 in attribute i of the class
	obj.s = "Deeksha"; // accessing the string attribute
	//printing the values of the attributes of class
	cout<<obj.i<<endl;
	cout<<obj.s<<endl;
}
