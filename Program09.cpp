#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;
  //myNum = 10;                 // Having defined a constant and reusing the variable name will not work.
  cout << myNum;              // Super imposing the value over the defined, it will throw an error.


  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;


  return 0;
}
