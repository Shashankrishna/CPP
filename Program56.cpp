#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class myClass {        // The class
  public:              // Access specifier
       int myNum;      // Attribute (int variable)
       string myString;  // Attribute (string variable)

};

int main(){
    myClass myobj;    // Create an object of MyClass

    // Access attributes and set values
    myobj.myNum = 15;
    myobj.myString = "Shashank Vasuki";

    // Print values
    cout << myobj.myNum << "\n"; 
    cout << myobj.myString; 
    return 0;
}