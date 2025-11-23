#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that returns the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // returning a structure
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student st[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", st[i].name);
        printf("Roll No: ");
        scanf("%d", &st[i].roll_no);
        printf("Marks: ");
        scanf("%f", &st[i].marks);
    }

    // Call function to get top student
    struct Student topper = getTopStudent(st, n);

    // Print returned structure
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
