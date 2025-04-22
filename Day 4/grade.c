#include <stdio.h>
int main() {
    int marks;
    printf("ENTER YOUR MARKS: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks < 90 && marks >= 80) {
        printf("Grade B\n");
    } else if (marks < 80 && marks >= 70) {
        printf("Grade C\n");
    } else if (marks < 70 && marks >= 60) {
        printf("Grade D\n");
    } else if (marks < 60 && marks >= 50) {
        printf("Grade E\n");
    } else if (marks < 50 && marks >= 40) {
        printf("Grade F\n"); 
    } else if (marks < 40 && marks >= 30) {
        printf("Pass\n");
    } else if (marks < 30 && marks >= 0){
        printf("Fail\n");  
    }
    else{
        printf("Invalid marks\n");
    }       
}