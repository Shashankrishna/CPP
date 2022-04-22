#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Multiple Inheritance Example

// Base Class
class MyFirstClass{
   public:
     void myFirstFunction() {
         cout << "This is parent class" << "\n";
     }
};

// Another base class
class MySecondClass {
    public:
      void mySecondFunction() {
          cout << "This is second class" << "\n";
      }
};

// Derived Class
class MyChildClass: public MyFirstClass, public MySecondClass{
};

int main(){
    MyChildClass myObj;
    myObj.myFirstFunction();
    myObj.mySecondFunction();
    return 0;
}