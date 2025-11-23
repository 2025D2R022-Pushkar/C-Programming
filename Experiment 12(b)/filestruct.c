#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s;
    FILE *fp;
    char file[100];

    printf("Enter the file to write to: ");
    scanf("%s", file);

    fp = fopen(file, "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter Student's name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "Name: %s\nRoll Number: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);

    fclose(fp);

    fp = fopen(file, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Data from file %s:\n", file);

    while (fgets(file, sizeof(file), fp)) {
        printf("%s", file);
    }

    fclose(fp);

    return 0;
}