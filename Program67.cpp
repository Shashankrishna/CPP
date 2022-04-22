#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Base Class
class vehicle{
    public:
      string brand = "Audi";
      void honk(){
          cout << "Move Side" << "\n";
      }
};

// Derived Class
class car: public vehicle {
    public:
    string model = "A8L";
};

int main(){
    car mycar;
    mycar.honk();
    cout << mycar.brand + " " + mycar.model;
    return 0;
}