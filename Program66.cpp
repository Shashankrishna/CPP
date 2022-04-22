#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Employee{
    private:
      int salary;
    public:
      void setSalary(int s){
          salary = s;
      }  
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee myObj;
    myObj.setSalary(200000);
    cout << myObj.getSalary();
    return 0;
}