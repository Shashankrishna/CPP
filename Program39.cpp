#include<iostream>
using namespace std;

int main(){
   string alphabets[2][2][2]{
   {
       {"A","B"},
       {"C","D"}
   },
   {
       {"E","F"},
       {"G","H"}
   }
   };
   for (int i = 0; i < 2; i++){
       for (int j = 0; j < 2; j ++){
           for (int k = 0; k < 2; k++){
           cout << alphabets[i][j][k] << "\n";
           }
       }
   }

    return 0;
}