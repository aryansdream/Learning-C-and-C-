#include <stdio.h>
int factorial(int n){
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    int fact = n * factorial(n - 1);
    return fact;
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);
    return 0;
}