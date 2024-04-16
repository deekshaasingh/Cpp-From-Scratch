/*

Question 1. Assign data to members of structure variable and display it.

#include <iostream>
using namespace std;

struct book{
	char name[40];
	char issue[20];
	int date;
};

int main(){
	book b1;
	cout<<"Name of book: ";
	cin.get(b1.name,40);
	
	cout<<"Issue Date of Book: ";
	cin>>b1.issue;
	
	cout<<"Date of Return: ";
	cin>>b1.date;
	
	cout<<"Displaying all the information: "<<endl;
	
	cout<<"Name of book: "<<b1.name<<endl;
	cout<<"Issue Date of Book: "<<b1.issue<<endl;
	cout<<"Date of Return: "<<b1.date;
	
} 

Question 2. Program to use struct as a function argument.

#include <iostream>
using namespace std;

struct Person{
	int roll;
	int age;
};

void func(struct Person p);

int main(){
	
	struct Person p;
	p.roll = 7;
	p.age = 24;
	
	func(p);
}

void func(struct Person p)
{
	cout<<"Roll Number: "<<p.roll<<endl;
	cout<<"Age: "<<p.age;
}

*/
