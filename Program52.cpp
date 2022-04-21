#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before Swap" << "\n";
    cout << firstNum << secondNum << "\n";

    swapNums(firstNum, secondNum);    
    
    cout << "After Swap" << "\n";
    cout << firstNum << secondNum << "\n";
    return 0;
}