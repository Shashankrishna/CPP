#include<iostream>
using namespace std;

int main(){
   int i;

   string cars[4] = {"Audi", "Benz", "BMW", "Rolls Royce"};
   for (i = 0; i< 4; i ++){
       cout<< cars[i] << "\n";
       cout << i << ": " << cars[i] << "\n";
   }
    return 0;
}