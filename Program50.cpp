#include<iostream>
#include<string>
using namespace std;

void myFunction(string Fname, int Age){
    cout << Fname << " is " << Age << "\n";
}

int main(){
   myFunction("Shashank", 29);
   myFunction("Shashank", 29);
   myFunction("Shashank", 29);

   return 0;
}