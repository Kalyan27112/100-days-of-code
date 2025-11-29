#include <stdio.h>

// Define a structure
struct Student {
    int roll;
    float marks;
    char name[50];
};

int main() {
    struct Student s1 = {1, 92.5, "Alice"};
    struct Student *ptr;   // pointer to struct

    ptr = &s1;   // store address of s1 in pointer

    // Modify data using pointer and -> operator
    ptr->roll = 10;
    ptr->marks = 95.0;

    // Display data using -> operator
    printf("Student Details:\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
