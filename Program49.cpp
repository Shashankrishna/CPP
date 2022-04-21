#include<iostream>
#include<string>
using namespace std;

void myFunction(string country = "sweden"){
    cout << country << "\n";
}

int main(){
   myFunction("India");
   myFunction("Germany");
   myFunction("France");
   myFunction("UK");
   myFunction("USA");
   myFunction();
    return 0;
}