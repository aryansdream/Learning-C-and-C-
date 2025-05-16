#include <iostream>
using namespace std;
class gparent{
public:
    void show() {
        cout << "Grandparent's show function" << endl;
    }
    int add(int a, int b) {
        return a + b;
    }
};
class parent: public gparent{
public:
    void show() {
        cout << "Parent's show function" << endl;
    }
};
class child: public parent{
public:
    void show() {
        cout << "Child's show function" << endl;
    }
};
int main() {
    child c;
    c.show();
    c.add(5, 10);
    cout << "Sum: " << c.add(5, 10) << endl; // Calls add function from gparent
    parent p;
    p.show();
    p.add(3, 7);
    cout << "Sum: " << p.add(3, 7) << endl; // Calls add function from gparent
    gparent g;
    g.show();
    g.add(2, 8);
    cout << "Sum: " << g.add(2, 8) << endl; // Calls add function from gparent  
    return 0;
}