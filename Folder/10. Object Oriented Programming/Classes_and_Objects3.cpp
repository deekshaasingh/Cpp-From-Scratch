#include <iostream>
#include <string>

using namespace std;

class Employee{
	public:
		int empID;
		string empName;
		double empSalary;
		
	void insert(int i, string n, double d){
		empID = i;
		empName = n;
		empSalary = d;
	}
	
	void show(){
		cout<<empID<<" "<<empName<<" "<<empSalary<<endl;
	}
};

int main(){
	Employee e1;
	e1.insert(1, "Deeksha", 1000000);
	e1.show();
	
	Employee e2;
	e2.insert(2, "Yami", 5000);
	e2.show();
}
