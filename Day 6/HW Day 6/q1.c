/*Write a Program of a given array to print the sum of all the elements of an Array.*/

#include <stdio.h>
int sumarray( int size){
    int arr[size];
    int sum = 0;
    printf("Enter the elements of the array: ");
    for(int i = 0; i <size; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    return sum;
}

int main(){
    int d;
    printf("Enter the no. you want to add :");
    scanf("%d", &d);
    printf("The sum of the array is: %d", sumarray(d));
    return 0;
}