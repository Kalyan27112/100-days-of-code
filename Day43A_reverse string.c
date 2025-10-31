//Reverse a string.
#include <stdio.h>
int main() {
    char s[100];
    int i, j;
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++);
    for(j = i - 1; j >= 0; j--) {
        printf("%c", s[j]);
    }
    return 0;
}
