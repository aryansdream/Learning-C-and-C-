#include <iostream>
#include <string>
using namespace std;
int checkArmstrong(int n) {
    int a = 0;
    int m = n;
    while (n > 0) {
        int b = n%10;
        int c = b*b*b;
        a = a+c;
        n = n/10;      
    }
    if (a==m){
        return 1;}
    else{
        return 0;
    }
}

int main() {
    int b;
    cout << "Enter a no.";
    cin >> b;
    if(checkArmstrong(b) ==1){
        cout <<"This is an Armstrong no.";
    }
    else{
        cout <<"This isn't armstrong no. ";
    }
}