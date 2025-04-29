#include <stdio.h>
const char* primeCheck(int n) {
    if (n <= 1) {
        return "Not Prime"; 
    }
    if (n == 2) {
        return "Prime";
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return "Not Prime";
        }
    }
    return "Prime"; 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, primeCheck(n));
    return 0;
}