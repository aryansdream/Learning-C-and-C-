#include <stdio.h>
int sumFunc(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int a; int b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int result = sumFunc(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}