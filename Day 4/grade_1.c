#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5;
    printf("Enter marks of 5 subjects: \n");
    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3);
    scanf("%f", &s4);
    scanf("%f", &s5);
    float marks = (s1 + s2 + s3 + s4 + s5) / 5;
    if (marks >= 90 && marks <= 100) {
        printf("You Scored %f. Grade A\n",marks);
    } else if (marks < 90 && marks >= 80) {
        printf("You Scored %f. Grade B\n",marks);
    } else if (marks < 80 && marks >= 70) {
        printf("You Scored %f. Grade C\n",marks);
    } else if (marks < 70 && marks >= 60) {
        printf("You Scored %f. Grade D\n",marks);
    } else if (marks < 60 && marks >= 50) {
        printf("You Scored %f. Grade E\n",marks);
    } else if (marks < 50 && marks >= 40) {
        printf("You Scored %f. Grade F\n",marks);
    } else if (marks < 40 && marks >= 30) {
        printf("You Scored %f.  Pass\n",marks);
    } else if (marks < 30 && marks >= 0) {
        printf("You Scored %f. Fail\n",marks);
    } else {
        printf("Invalid Input");
    }
}