#include <stdio.h>
int main(){
    float a;
    float b;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &a);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &b);
    float area = 2 * 3.14 * a * (a + b);
    printf("The area of the cylinder is: %f\n", area);
}