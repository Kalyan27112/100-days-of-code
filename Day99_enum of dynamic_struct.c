#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input from the user
    printf("Enter Student Details:\n");
    printf("Name: ");
    scanf("%49s", s->name);

    printf("Age: ");
    scanf("%d", &s->age);

    printf("Marks: ");
    scanf("%f", &s->marks);

    // Print details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Age   : %d\n", s->age);
    printf("Marks : %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
