#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin>>a>>b;
    
    int q = a.size();
    int w = b.size();
    
    cout<<q<<" "<<w<<endl;
    cout<<a+b<<endl;
    
    char s = a[0];
    char d = b[0];
    
    a[0] = d;
    b[0] = s;
    cout<<a<<" "<<b;
  
    return 0;
}
