/* Question 1. Write a code that performs different mathematical
operations on two numbers. Make appropriate functions to perform this task.
*/

#include <iostream>
using namespace std;

float sum(int a, int b)
{
	return(a+b);
}

float sub(int a, int b)
{
	return (a-b);
}

float mul(int a, int b)
{
	return (a*b);
}

float div(int a, int b)
{
	return (a/b);
}


int main()
{
	float n1;
	cout<<"Enter a number: ";
	cin>>n1;
	
	float n2;
	cout<<"Enter another number: ";
	cin>>n2;
	
	float add = sum(n1, n2);

	
	float diff = sub(n1, n2);

	
	float prod = mul(n1, n2);
	
	
	float divv = div(n1, n2);
	
	
	int choice;
	cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
	cout<<"What operation would you like to perform?"<<endl<<"Enter a number according to the operation respectively: "<<endl;
	cin>>choice;
	
	if(choice == 1){
		cout<<"Addition is: "<<add;
	}
	
	else if (choice == 2){
		cout<<"Subtraction is: "<<diff;
	}
	
	else if (choice == 3){
		cout<<"Multiplication is: "<<prod;
	}
	
	else if (choice == 4){
		cout<<"Division is: "<<divv;
	}
	
	else{
		cout<<"Enter something valid!";
	}
}
