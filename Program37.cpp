#include<iostream>
using namespace std;

int main(){
   // Multidimensional Array: Matrix
   string alphabets[2][2] = {
       {"A","B"},
       {"C","D"}
   };
    cout << alphabets[0][0] << "\n";
    alphabets[0][0] = "Z";
    cout << alphabets[0][0] << "\n";
    return 0;
}