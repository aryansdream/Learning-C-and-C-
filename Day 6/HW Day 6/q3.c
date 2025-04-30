// Write a program of a given array to print the value of Even index.

#include <stdio.h>
int evenindex(int size){
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements at even index are:\n");
    for(int i=0; i<size; i++){
        if(i%2==0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    evenindex(size);
    return 0;
}