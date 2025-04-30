/* Create a function which will take input from the user as size of array,
then take the values from the user and,
further print the values of the array which are prime...*/

#include <stdio.h>
int is_primearray(int size){
    int arr[size];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("The prime elements of the array are: \n");
    for (int i=0; i<size; i++){
        if (arr[i] <= 1) {
            return 0; // Not prime
        }
       for (int i = 2; i < arr[i]; i++) {
        if (arr[i]% i == 0) {
            return 0; // Not prime
        }
        else {
            printf("%d ", arr[i]); // Prime
        }
    }

    }
}

int main(){
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    is_primearray(size);
    return 0;
}