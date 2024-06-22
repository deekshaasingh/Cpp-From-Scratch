#include <iostream>
#include <string>

using namespace std;

class Car{
	public:
		
		string brand;
		string model;
		int year;
		
		Car(string x, string y, int z){
			brand = x;
			model = y;
			year = z;
		}
};

int main(){
	Car c1("Benz", "Model 2", 2019);
	
	cout<<c1.brand<<endl<<c1.model<<endl<<c1.year;
}
