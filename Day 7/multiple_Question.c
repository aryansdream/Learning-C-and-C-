#include <stdio.h>
int main(){
    int arr[] = {18,7,6,13,9,17,6,19,19,6};
    // printf("Enter the no. :");
    // int n;
    // scanf("%d", &n);
    // int count = 0;
    // for (int i = 0; i < 9; i++){
    //     if (arr[i] == n){
    //         count++;
    //     }
    // }
    // printf("The frequency of %d is %d ", n, count);
    // return 0;
    int max = 0;
    for (int i = 0; i < 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < 10; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    // printf("The minimum value in the array is %d \n", min);
    // printf("The maximum value in the array is %d ", max);
    int large =0;
    for (int i = 0; i < 10; i++){
        if (arr[i] == max){
            large++;
        }
    }
    int small =0;
    for (int i = 0; i < 10; i++){
        if (arr[i] == min){
            small++;
        }
    }
    printf("The frequency of smallest element i.e. %d is %d \n", min, small);
    printf("The frequency of largest element i.e. %d is %d ", max, large);
    }