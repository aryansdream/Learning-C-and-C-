#include <iostream>
using namespace std;
// parent class
class parent{
public:
    void show1() {
        cout << "Parent's show function" << endl;
    }
    int add(int a, int b) {
        return a + b;
    }
};
// uncle class
class uncle{
public:
    void show2() {
        cout << "Uncle's show function" << endl;
    }
    int sub(int a, int b) {
        return a - b;
    }
};
// child0 class
class child0: public parent{
public:
    void show3() {
        cout << "Child0's show function" << endl;
    }
};
// child1 class
class child1: public parent, public uncle{
public:
    void show4() {
        cout << "Child1's show function" << endl;
    }
};


int main() {
    child0 c0;
    c0.show1();
    c0.add(5, 10);
    cout << "Sum: " << c0.add(5, 10) << endl; // Calls add function from parent
    c0.show3();
    
    child1 c1;
    c1.show1();
    c1.add(3, 7);
    cout << "Sum: " << c1.add(3, 7) << endl; // Calls add function from parent
    c1.show2();
    c1.sub(10, 5);
    cout << "Difference: " << c1.sub(10, 5) << endl; // Calls sub function from uncle
    c1.show4();
    
    return 0;
}