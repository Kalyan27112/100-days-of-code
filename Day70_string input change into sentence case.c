Q120 (File Handling)
//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000005];

    // Read input line (may contain spaces)
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int n = strlen(s);

    // Convert first character to uppercase (if alphabetic)
    if (n > 0 && isalpha(s[0])) {
        s[0] = toupper(s[0]);
    }

    // Convert rest to lowercase
    for (int i = 1; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s", s);
    return 0;
}
