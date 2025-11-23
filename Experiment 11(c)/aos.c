#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    int mark[3];  // Marks for 3 subjects
    int tot;
};

int main() {
    struct Student s[5];  // Array of structures for 5 students
    int i, j, n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    // Input student data
    for(i = 0; i < n; i++) {
        printf("\nEnter Student Roll Number: ");
        scanf("%d", &s[i].rollno);
        
        printf("Enter Student name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Student 3 subject's marks: ");
        for(j = 0; j < 3; j++) {
            scanf("%d", &s[i].mark[j]);
        }
    }
    
    // Calculate total marks
    for(i = 0; i < n; i++) {
        s[i].tot = 0;
        for(j = 0; j < 3; j++) {
            s[i].tot = s[i].tot + s[i].mark[j];
        }
    }
    
    // Display results
    for(i = 0; i < n; i++) {
        printf("\n\t*Students Records*\n");
        printf("\n==================================\n");
        printf("Student's Roll no. - %d\n", s[i].rollno);
        printf("Student's Name - %s\n", s[i].name);
        printf("Student's Total Marks - %d\n", s[i].tot);
    }
    
    return 0;
}