#include <iostream>
using namespace std;

class Count{
	private:
		int value;
	public:
		Count() : value(99){} // method to declare a constructor
		
		// overloading ++ when used as a prefix
		
		void operator ++(){
			++value; // increments the value by 1
		}
		
		void display(){
			cout<<value<<endl;
		}
};

int main(){
	Count c1; // object of count class
	// calling the void operator ++ function
	++c1; // increments the value by 1
	c1.display();
}
