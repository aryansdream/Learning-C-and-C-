#include <stdio.h>
int primeCheck( int n){
    if (n <= 1) {
        return 0; // Not prime
    }
   for (int i = 2; i <n; i++) {
    if (n % i == 0) {
        return 0; // Not prime
    }
}
return 1; // Prime
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (primeCheck(n) == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}