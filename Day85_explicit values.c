Q135 (Enum)
//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Letters {
    a = 10,
    b = 11,
    c = 12
};

int main() {
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
