#include <stdio.h>

union Student { 
    char name[50]; 
    int roll; 
    float marks;
};

int main() {
    union Student student;

    printf("Enter student's name: "); scanf("%s", student.name);
    printf("Student's Name: %s\n", student.name);

    printf("Enter roll number: "); scanf("%d", &student.roll);
    printf("Roll Number: %d\n", student.roll);

    printf("Enter marks: "); scanf("%f", &student.marks);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}