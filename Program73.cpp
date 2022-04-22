#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      //throw (age);
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    //cout << "Age is: " << myNum;  
    cout << "Error number: " << myNum;  
  }
  return 0;
}

/*  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}*/