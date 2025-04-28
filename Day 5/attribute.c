#include <stdio.h>
int myFunction( int x, int v){
    int c;
    c = x+v;
    return c;
}
int main(){
    int b;
    printf("enter first Nuumber :\n");
    scanf("%d", &b);
    int s;
    printf("enter second Number :\n");
    scanf("%d", &s);
    
    printf("The Sum of %d and %d is %d",b,s,myFunction(b,s));
}