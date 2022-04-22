#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Parent Class
class MyClass{
  public:  
   void myFunction() {
       cout << "This is parent class" << "\n";
   }
};

// Child Class
class MyChild: public MyClass {
};

// Grandchild Class
class MyGrandChild: public MyChild {   
};

int main(){
    MyGrandChild MyObj;
    MyObj.myFunction();
    return 0;
}

