#include <iostream>
using namespace std;
class company{
    private:
    string salary;
    public:
    string name;
    string designation;
};

int main(){
    company c1;
    // Cannot access private member 'salary' directly; demonstrate encapsulation instead
    cout << "Salary is private member of class company." << endl;
    c1.name= "Aryan";
    c1.designation= "Software Engineer";
    cout<< "Name: "<< c1.name << endl;
    cout<< "Designation: "<< c1.designation << endl;
    
}    


