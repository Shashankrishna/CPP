#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class MyClass {         // The Class
   public:              // Public Access Specifier
     int x;             // Public attribute (int variable)
};

int main(){
    MyClass MyObj;    // Object of my class 

    // Access attributes and set values
    MyObj.x = 11;

    // Print values
    cout << MyObj.x << "\n";
    return 0;
}