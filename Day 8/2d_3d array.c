#include <stdio.h>
int main(){
    int m;
    printf("Enter the number of rows:\n");
    scanf("%d", &m);
    int ar[2][5][m];

    printf("Enter the values of the array:\n");
    for (int i=0; i<2; i++){
        for (int k =0; k<5; k++){
          for (int j=0; j<m; j++){
            scanf("%d", &ar[i][k][j]);
            }
        }
        }
    printf("The values of the array are:\n");
    for (int i=0; i<2; i++){
        for (int k =0; k<5; k++){
          for (int j=0; j<m; j++){
            printf("ar[%d][%d][%d] = %d\n", i,k, j, ar[i][k][j]);
        }
    } 
}
}