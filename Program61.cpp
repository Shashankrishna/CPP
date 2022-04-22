#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class MyClass{       // The class
    public:          // Access specifier 
      MyClass() {       // Constructor
          cout << "Welcome to my World." << "\n";
      }
};

int main(){
    MyClass MyObj; // Create an object of MyClass (this will call the constructor)
    return 0;
}