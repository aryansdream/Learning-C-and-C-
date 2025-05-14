#include <iostream>
using namespace std;
void add(int a, int b){
    cout<< "The sum of two integers is "<< a + b << endl;
}
void add(float a, float b){
    cout<< "The sum of two floats is "<< a + b << endl;
}
void add(int a, float b){
    cout<< "The sum of an integer and a float is "<< a + b << endl;
}
void add(float a, int b){
    cout<< "The sum of a float and an integer is "<< a + b << endl;
}

int main(){
    int x = 5, y = 10;
    float p = 5.5, q = 10.5;
    add(x, y); // Calls the first function
    add(p, q); // Calls the second function
    add(x, p); // Calls the third function
    add(p, y); // Calls the fourth function
    return 0;
}