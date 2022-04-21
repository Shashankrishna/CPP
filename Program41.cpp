#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int Num;
    string String;
  } myStructure;

  myStructure.Num = 1;
  myStructure.String = "Hello World!";

  cout << myStructure.Num << "\n";
  cout << myStructure.String << "\n";
  return 0;
}
