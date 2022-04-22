#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "Audi";
  carObj1.model = "R8";
  carObj1.year = 2022;

  Car carObj2;
  carObj2.brand = "Audi";
  carObj2.model = "A8L";
  carObj2.year = 2022;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
