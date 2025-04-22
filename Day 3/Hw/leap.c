#include <stdio.h>
int main(){
    int a;
    printf("Enter a Year: ");
    scanf("%d", &a);
    int c = a%4;
    int d = a%100;
    int e = a%400;
    ((c==0 && d!=0)||(d==0 && e ==0))? printf("%d This is a leap year\n ", a):printf(" This is not a leap year\n %d", a);
    return 0;
}