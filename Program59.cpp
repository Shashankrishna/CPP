#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class myClass{     // The class
   public:        // Access specifier
     void myMethod();  // Method/function declaration
};

// Method/function definition outside the class
void myClass::myMethod(){
   cout << "Welcome to my world." << "\n";
}

int main(){
    myClass myObj;
    myObj.myMethod();
    return 0;
}