#include <iostream>
using namespace std;

class student {
public:
    string name;
    student(string n) {
        name = n;
        cout << "Hi " << name << endl;
    }
};

// Derived class inheriting from student
class graduateStudent : public student {
public:
    string degree;
    graduateStudent(string n, string d) : student(n) {
        degree = d;
        cout << "Degree: " << degree << endl;
    }
};

int main() {
    graduateStudent gs("Alice", "MSc Computer Science");
    return 0;
}