#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks[3];
    int total; };

int main() {
    int i, j, n;
    scanf("%d", &n);
    struct student s[n];
    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        for (j = 0; j < 3; j++) { scanf("%d", &s[i].marks[j]); }
    }
    for (i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Marks: %d, %d, %d\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
    }
    return 0;
}