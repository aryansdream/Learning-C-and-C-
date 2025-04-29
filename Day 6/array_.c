#include <stdio.h>
int main(){
    int a = 5;
    int marks[9] = {18,29,17,43,28,37,91,24,7};
    // printf("%d ", marks[4]);
    // printf("%d", marks[6]);
    for (int i = 0; i < 9; i++){
        printf("Marks = %d \n", marks[i]);
    }
    // printf("%d\n", &marks[4]);
    // printf("%d", &marks[5]);
    printf("Address of the element a is= %d \n", &a);
    for (int i = 0; i < 9; i++){
        printf("Address of the Element  %d of the array marks is= %d \n", marks[i],&marks[i]);
    }   
    int ar[5];
    ar[0] = 1;
    ar[1] = 2;
    ar[2] = 3;
    ar[3] = 4;
    ar[4] = 5;
    printf("%d\n", ar[0]);
    printf("%d\n", ar[1]);
    printf("%d\n", ar[2]);
    printf("%d\n", ar[3]);
    printf("%d\n", ar[4]);
}