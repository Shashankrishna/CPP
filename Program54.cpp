#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int plusFunc(int x, int y){
    return x + y;
}

double plusFunc(double x, double y){
    return x + y;
}

int main(){
    int myNum1 = plusFunc(10, 20);
    double myNum2 = plusFunc(15.50, 21.50);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";

    return 0;
}