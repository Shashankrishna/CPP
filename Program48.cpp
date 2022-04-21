#include<iostream>
#include<string>
using namespace std;

void myFunction(string Fname){
    cout << Fname << "\n";
}

int main(){
    myFunction("Shashank");
    myFunction("Shiva");
    myFunction("Krishna");

    return 0;

}