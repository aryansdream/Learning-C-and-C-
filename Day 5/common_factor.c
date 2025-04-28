#include <stdio.h>

 hcf() {
    int n = 10;
    int m = 15;
    int hcf = 1;

    for (int i = 1; i <= (n < m ? n : m); i++) { 
        if (n % i == 0 && m % i == 0) {
            hcf = i; 
        }
    }

    printf("HCF: %d\n", hcf);
    return 0;
}
int main() {
    hcf();
    return 0;
} 