#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// function to add one integer and one float
float add(int a, float b) {
    return a + b;
}
// Function to add two floats
float add(float a, float b) {
    return a + b;
}
// function to add one float and one integer
float add(float a, int b) {
    return a + b;
}

int main(){
    int a = 5;
    int b = 10;
    float c = 5.5;
    float d = 10.5;
    cout << "Sum of two integers: " << add(a, b) << endl;
    cout << "Sum of one integer and one float: " << add(a, c) << endl;
    cout << "Sum of two floats: " << add(c, d) << endl;
    cout << "Sum of one float and one integer: " << add(c, a) << endl;
    return 0;}
