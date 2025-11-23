#include <stdio.h>

enum Colors {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Colors c;

    // Array of enum names in the same order
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    printf("Enum Name\tValue\n");
    printf("-------------------------\n");

    for (c = RED; c <= YELLOW; c++) {
        printf("%s\t\t%d\n", names[c - 1], c);
    }

    return 0;
}
