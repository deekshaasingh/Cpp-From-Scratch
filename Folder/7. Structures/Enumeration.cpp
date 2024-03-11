#include <iostream>
using namespace std;

enum test{
	first,
	second = 23,
	third,
	fourth = 56,
	fifth,
};

int main()
{
	cout<<first<<endl;
	cout<<second<<endl;
	cout<<third<<endl;
	cout<<fourth<<endl;
	cout<<fifth<<endl;
}
