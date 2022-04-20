#include<iostream>
using namespace std;

int main(){
   int x = 5, y = 10;
   
   if (x > y){
   cout << "x is greater than y" << "\n";}
   else{
   cout << "x is lesser than y" << "\n";
   }

    string result = (x > 10)? "Good Day" : "Good Night";
    cout << result;
    return 0;
}