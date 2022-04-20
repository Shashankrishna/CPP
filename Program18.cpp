#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting << "\n";

  string FirstName = "Shashank";
  string LastName = "Vasuki";
  //string FullName = FirstName + LastName;
  //string FullName = FirstName + " " + LastName;
  string FullName = FirstName.append(LastName);
  cout << FullName << "\n";

  


  return 0;
}
