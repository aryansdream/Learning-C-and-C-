#include <iostream>
#include <string>
using namespace std;
int palindrome(int n) {
    int rev = 0;
    while (n > 0) {
        int b = n % 10;
        rev = rev * 10 + b;
        n = n / 10;
    }
    return rev;
}


string palindrome(string s) {
    int a = 0;
    int b = s.length();
    string rev = "";
    for (int i = b-1; i >=0; i--) {
        rev += s[i];
    }
    return rev;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << palindrome(n) << endl;
    if (palindrome(n) == n) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Reversed string: " << palindrome(s) << endl;
    if (palindrome(s) == s) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


