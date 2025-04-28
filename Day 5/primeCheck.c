#include <stdio.h>
 primeCheck(int n){
    
    for(int i = 2; i<n; i++){
        if (n == 1 || n == 0){
            return("Not Prime");
        }
        if (n == 2){
            return("Prime");
        }
        if (n%i == 0){
            return("Not Prime");
        }
        if (n%i != 0){
            return("Prime"); 
        }   
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, primeCheck(n));
    return 0;
}
