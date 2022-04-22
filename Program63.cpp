#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Car {     // The class
    public:         // Access Specifier
      string brand;  // Attribute
      string model;  // Attribute
      int year;      // Attribute
      Car(string x, string y, int z);// Constructor with parameters
};

// Constructor definition outside the class
Car::Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
}

int main(){
    // Create Car objects and call the constructor with different values
    Car carObj1("Audi", "R8", 2022);
    Car carObj2("Audi", "A8L", 2022);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}