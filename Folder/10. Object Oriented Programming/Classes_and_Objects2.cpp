#include <iostream>
using namespace std;

class Rectangle{
	public:
		double length;
		double breadth;
		double height;
		
	double area(){
		return length*breadth;
	}
	
	double volume(){
		return length*breadth*height;
	}
};

int main(){
	Rectangle obj;
	
	obj.length = 23.34;
	obj.breadth = 65.67;
	obj.height = 89.09;
	
	cout<<"Area: "<<obj.area()<<endl;
	cout<<"Volume: "<<obj.volume();
}
