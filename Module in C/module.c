    // my_module.c
    #include <stdio.h>
    #include "module.h"
    void arrayIO(int a){
    int arr[a];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < a; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
    }

    // int main() {
    //     int a = 5; // Example size of the array
    //     arrayIO(a);
    //     return 0;
    // }
