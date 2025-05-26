#include <iostream>
using namespace std;
int main() {
    int a = 12;
    int b = 18;
    int count = 1;
    if (a > b){
        for(int i = b; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "Highest Common factor: " << i << endl;
                count++;
                if(count >2)break;
            }
        }
    }
    else {
        for(int i = a; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << "Highest Common factor: " << i << endl;
                count++;
                if(count >2)break;
            }
        }
    }
}