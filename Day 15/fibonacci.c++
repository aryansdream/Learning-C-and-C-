#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
    cout << "Enter the number of terms: ";
	cin >> a;
    int b = 0;
    if (a == 1) {
        cout << b << " ";
        return 0;
    }
    
    int c = 1;
    if (a == 2) {
        cout << b << " " << c << " ";
        return 0;
    }
    else {
    int next = 0;
    cout << b << " " << c << " ";
	for(int i = 0; i < a-2; i++) {
       next = b +c;
       cout << next << " ";
       b = c;
       c = next;

    }
};
}
