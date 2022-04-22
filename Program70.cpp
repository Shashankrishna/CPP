#include<iostream>
#include<string>
#include<cmath>

using namespace std;

// Access Specifiers

// Base Class
class Employee{
    protected:     // Protected access specifier
    int salary;
};

// Derived Class
class Programmer: public Employee {
    public:
     int bonus;
     void setSalary(int s){
         salary = s;
     }
     int getSalary(){
         return salary;
     }
};

int main() {
    Programmer myObj;
    myObj.setSalary(200000);
    myObj.bonus = 25000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}