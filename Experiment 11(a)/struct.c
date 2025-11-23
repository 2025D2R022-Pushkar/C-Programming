#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[5];
};

int main() {
    struct Student student;
    float total = 0;
    int i;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks in 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }

    printf("Student Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Total Marks: %.2f\n", total);

    return 0;
}