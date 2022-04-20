#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  cout << "The length of the txt string is: " << txt.length() << "\n";
  cout << "The length of the txt string is: " << txt.size() << "\n";
  cout << txt[20] << "\n";

  txt[0] = '1';
  cout << txt << "\n";

  //string firstName;
  //cout << "Type your first name: ";
  //cin >> firstName;          // get user input from the keyboard, cin will not accept blank space.
  //cout << "Your name is: " << firstName;

  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName); // it is possible to include space in between words.
  cout << "Your name is: " << fullName;

  return 0;
}
