#include<iostream>
using namespace std;

int main(){
   int number[5] = {10, 20, 30, 40, 50};
   cout << sizeof(number) << "\n";
   // (4 bytes x 5 elements) = 20 bytes.

   int getArrayLength = sizeof(number) / sizeof(int); // 20/4 = 5
   cout << getArrayLength << "\n";

    return 0;
}