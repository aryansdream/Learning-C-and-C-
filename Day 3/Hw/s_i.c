#include <stdio.h>
int main(){
    float a;
    float b;
    float c;
    printf("Enter the Principal Amount: ");
    scanf("%f", &a);  
    printf("Enter the Rate of Interest: ");
    scanf("%f", &b);
    printf("Enter the Time Period: ");
    scanf("%f", &c);    
    float SI = (a * b * c) / 100;
    printf("Simple Interest is: %f\n", SI);
    printf("Total Amount is: %f\n", a + SI);
}