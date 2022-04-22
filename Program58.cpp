#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class myClass{         // The class
  public:              // Access specifier
     void myMethod(){   // Method/function defined inside the class
         cout<< "Welcome to my World.";
     }
};

int main(){
    myClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}