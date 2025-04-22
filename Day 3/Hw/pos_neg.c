#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    (a>=0)? printf(" It is positive"):printf("It is negative");
     return 0;
}