#include <stdio.h>

void main() {
    int students[20][2], i;

    printf("Enter Roll No and Marks for 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d Roll No: ", i + 1);
        scanf("%d", &students[i][0]);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &students[i][1]);
    }

    printf("Stored Student Data:\n");
    printf("No. | Marks\n");
    for (i = 0; i < 20; i++) {
        printf("%d    | %d\n", students[i][0], students[i][1]);
    }
}