#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int c = a%2;
    (c==0)? printf(" is even\n %d", a):printf(" is odd\n %d", a);
    return 0;

}