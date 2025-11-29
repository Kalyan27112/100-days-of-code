Q148 (Enum)
//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1, p2;

    // Input for first struct
    printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%49s", p1.name);
    printf("Age: ");
    scanf("%d", &p1.age);
    printf("Height: ");
    scanf("%f", &p1.height);

    // Input for second struct
    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    scanf("%49s", p2.name);
    printf("Age: ");
    scanf("%d", &p2.age);
    printf("Height: ");
    scanf("%f", &p2.height);

    // Comparison
    if (strcmp(p1.name, p2.name) == 0 &&
        p1.age == p2.age &&
        p1.height == p2.height) {
        printf("\nThe two structs are IDENTICAL.\n");
    } else {
        printf("\nThe two structs are NOT identical.\n");
    }

    return 0;
}
