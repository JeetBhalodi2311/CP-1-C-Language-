#include <stdio.h>

void main() {

    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &sub3);

    printf("Enter marks of subject 4: ");
    scanf("%d", &sub4);

    printf("Enter marks of subject 5: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (float)total / 5;

    if (percentage < 35)
        printf("Fail",percentage);
    else if (percentage <= 45)
        printf("Pass Class",percentage);
    else if (percentage <= 60)
        printf("Second Class",percentage);
    else if (percentage <= 70)
        printf("First Class",percentage);
    else
        printf("Distinction",percentage);
}