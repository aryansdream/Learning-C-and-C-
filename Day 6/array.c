# include <stdio.h>
int main(){
   int a;
   scanf("%d", &a);
   int arr[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array is: "); 
    for (int i = 0; i < a; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}