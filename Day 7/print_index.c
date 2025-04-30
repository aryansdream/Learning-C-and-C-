#include <stdio.h>
int main(){
    int arr[] = {18,7,6,13,9,17,6,19,19,6};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++){
        if (arr[i] == n){
            printf("The index of %d is %d \n", n, i);
            break;
        } 
    }
}