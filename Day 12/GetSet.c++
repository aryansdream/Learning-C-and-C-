#include <iostream>
using namespace std;
class compamy{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary= s;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    compamy c1;
    c1.setSalary(10000);
    cout<< "Salary is: "<< c1.getSalary() << endl;
} 