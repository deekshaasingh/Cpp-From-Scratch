#include <iostream>
using namespace std;

// first base class

class Vehicle{
	public:
		Vehicle(){
			cout<<"I am a constructor of first base class."<<endl;
			cout<<"This is Vehicle class.";
		}
};

// second base class 
class Car{
	public:
		Car(){
			cout<<"I am a constructor of second base class."<<endl;
			cout<<"This is car class.";
		}
};

// sub class which is inheriting from vehicle and car

class Sub: public Vehicle, public Car{
	
};


int main(){
	// making the object of sub class
	Sub obj;
}
