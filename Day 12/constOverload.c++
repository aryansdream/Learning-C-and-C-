#include <iostream>
using namespace std;
class math{
    public:
    math(int a, int b){
        cout<< "Sum is: "<< a+b << endl;
    }
    math(float a, float b){
        cout<< "Sum is: "<< a+b << endl;
    }
    math(int a, float b){
        cout<< "Sum is: "<< a+b << endl;
    }
    math(float a, int b){
        cout<< "Sum is: "<< a+b   << endl;
    }
};

int main(){
    int a=10;
    int b=20;
    float c=10.5;
    float d=20.5;
    math m1(a,b);
    math m2(c,d);
    math m3(a,c);
    math m4(c,a);
}