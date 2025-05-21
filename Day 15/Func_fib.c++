#include <iostream>
#include <string>
using namespace std;
int fib(int n) {
    if (n <=1) {
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }

}


int main() {
    int a;
    cout << "Enter the number of terms: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << fib(i) << " ";
    }
