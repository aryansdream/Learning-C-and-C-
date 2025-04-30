#include <stdio.h>
int main(){
    int arr[] = {18,7,6,13,9,17,6,19,19,6};
    int max = 0;
    int mx = 0;
    for (int i = 0; i < 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < 10; i++){
        if (arr[i] == max){
            arr[i] = 0;
        }
    }
    max = 0;
    for (int i = 0; i < 10; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    printf("The second largest number is %d \n", max);
    return 0;
}
        