#include <stdio.h>
#include "module.h"

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arrayIO(size); // Call the function from module.c

    return 0;
}