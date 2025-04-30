// Write a program of a given array only print the even numbers.

#include <stdio.h>
int evenarray(int size){
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i = 0; i <size; i++){
        scanf("%d", &arr[i]);
    }
    printf("The even numbers in the array are: ");
    for(int i = 0; i <size; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
}

int main(){
    int d;
    printf("Enter the size of the array: ");
    scanf("%d", &d);
    evenarray(d);
    return 0;
}