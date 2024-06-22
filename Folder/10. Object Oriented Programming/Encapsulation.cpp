#include <iostream>
using namespace std;

class Rectangle{
	public:
		int length;
		int breadth;
		
	Rectangle(int l, int b){
		length = l;
		breadth = b;
	}
	
	int area(){
		return length*breadth;
	}
};

int main(){
	Rectangle r1(2,3);
	cout<<"Area: "<<r1.area();
}
