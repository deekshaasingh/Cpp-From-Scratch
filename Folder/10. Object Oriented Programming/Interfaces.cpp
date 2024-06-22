#include <iostream>
using namespace std;

// base class
class Shape{
	public:
	virtual int getArea() = 0; // pure virtual function
	
	void setWidth(int w){
		width = w;
	}
	
	void setHeight(int h){
		height = h;
	}
	
	protected:
		int width;
		int height;
};

class Rectangle: public Shape{
	public:
		int getArea(){
			return width*height;
		}
};

class Triangle: public Shape{
	public:
		int getArea(){
			return(width*height)/2;
		}
};

int main(){
	Rectangle r;
	Triangle t;
	
	r.setHeight(5);
	r.setWidth(4);
	
	cout<<"Area of rectangle: "<<r.getArea()<<endl;
	
	t.setHeight(3);
	t.setWidth(2);
	
	cout<<"Area of triangle: "<<t.getArea();
}
