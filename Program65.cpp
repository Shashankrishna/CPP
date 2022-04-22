#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class MyClass{
    public:           // Public access specifier
    int x;            // Public attribute
    private:          // Private access specifier
    int y;            // Private attribute
};

int main(){
    MyClass MyObj;
    MyObj.x = 07; // Allowed (x is public)
    //MyObj.y = 08; // Not allowed (y is private)
    return 0;
}
// By default all members of the class are private, if not specified by a specifier.