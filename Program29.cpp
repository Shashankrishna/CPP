#include<iostream>
using namespace std;

int main(){
    int i;
    for (i = 0; i< 10; i ++){
        if(i == 4){
            //break;
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}