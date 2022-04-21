#include<iostream>
using namespace std;

int main(){
   string cars[4] = {"Audi", "Benz", "BMW", "Rolls Royce"};
   int number[5] = {10, 20, 30, 40, 50};
   cout << cars[3] << "\n";
   cout << number[0] << "\n";

   cars[0] = "Opel";
   cout << cars[0] << "\n";
   
    return 0;
}