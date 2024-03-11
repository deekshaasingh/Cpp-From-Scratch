#include <iostream>
using namespace std;

struct person{
	char name[30];
	int age;
	float salary;
};

int main()
{
	person p1;
	cout<<"Enter name: ";
	cin.get(p1.name,30);
	
	cout<<"Enter age: ";
	cin>>p1.age;
	
	cout<<"Enter salary: ";
	cin>>p1.salary;
	
	cout<<"Displaying all the value that you entered: "<<endl;
	cout<<"Name: "<<p1.name<<endl;
	cout<<"Age: "<<p1.age<<endl;
	cout<<"Salary: "<<p1.salary;
}
