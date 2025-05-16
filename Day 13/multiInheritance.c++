#include <iostream>
using namespace std;
class father{
public:
    void show() {
        cout << "Father's show function" << endl;
    }
};
class mother{
    public:
    void show() {
        cout << "Mother's show function" << endl;
    }
};
class child: public father, public mother{
public:
    void show() {
        cout << "Child's show function" << endl;
    }
};

int main() {
    child c;
    c.father::show(); // Calls father's show function
    c.mother::show(); // Calls mother's show function
    c.show();         // Calls child's show function
    return 0;
}
// This code demonstrates multiple inheritance in C++. The child class inherits from both father and mother classes.