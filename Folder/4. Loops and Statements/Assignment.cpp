// Question 1. Create a calculator using switch statemement.

/*
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter first number: "<<endl;
	cin>>num1;
	cout<<"Enter another number: "<<endl;
	cin>>num2;
	
	int op;
	cout<<"Enter 1 for Addition!"<<endl<<"Enter 2 for Subtraction!"<<endl<<"Enter 3 for Multiplication!"<<endl<<"Enter 4 for Division!"<<endl;
	cin>>op;
	
	switch(op){
		case 1: cout<<num1+num2;
		break;
		
		case 2: cout<<num1-num2;
		break;
		
		case 3: cout<<num1*num2;
		break;
		
		case 4: cout<<num1/num2;
		break;
		
		default: cout<<"Enter a valid number!";
	}
}

*/

// Question 2. Write a code to show If-Else Ladder.

/*
#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter your marks: "<<endl;
	cin>>marks;
	
	if (marks<=33){
		cout<<"Oops! Seems like you need to improve!"<<endl;
	}
	
	else if (50<=marks){
		cout<<"Yayy, you have improved!"<<endl;
	}
	
	else if (100<=marks){
		cout<<"Damn! What a progress!"<<endl;
	}
	
	else{
		cout<<"Enter something valid!"<<endl;
	}
}
*/

// Question 3. Write a code for while loop.

/*
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	
	while(a<10){
		cout<<a<<endl;
		a++;
	}
}
*/

// Question 4. Write a code for For loop.

/*
#include <iostream>
using namespace std;

int main()
{
	for (int i=0; i<10; i++){
		cout<<"Haha!"<<endl;
	}
}
*/
