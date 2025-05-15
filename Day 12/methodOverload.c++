#include <iostream>
using namespace std;
class math{
    public:
    int add(int a, int b){
        return a + b;
    }
    float add(float a, float b){
        return a + b;
    }
    float add(int a, float b){
        return a + b;
    }
    float add(float a, int b){
        return a + b;
    }
};

int main(){
    int a=10;
    int b=20;
    float c=10.5;
    float d=20.5;
    math m1;
    cout<< "Sum of integers: "<< m1.add(a,b) << endl;
    cout<< "Sum of floats: "<< m1.add(c,d) << endl;
    cout<< "Sum of int and float: "<< m1.add(a,c) << endl;
    cout<< "Sum of float and int: "<< m1.add(c,a) << endl;
}

// The Four Pillars of OOP are:
// Encapsulation
// Inheritance
// Polymorphism
// Abstraction  