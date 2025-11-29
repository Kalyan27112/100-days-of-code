Q134 (Enum)
//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status code;

    // Example value (you may change it or take user input)
    code = SUCCESS;

    switch (code) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
