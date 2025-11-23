#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print the topper
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[topIndex].name);
    printf("Roll Number: %d\n", s[topIndex].roll_no);
    printf("Marks: %.2f\n", s[topIndex].marks);

    return 0;
}
