#include <stdio.h>
int array_input(a) {
    printf("Enter the Elements of the array: ");
    int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for (int i = 0; i < a; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return arr[a];
}
int main() {
    int a;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    array_input(a);
    return 0;
}