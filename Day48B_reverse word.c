//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[100];
    int i, j = 0, k;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (k = j - 1; k >= 0; k--)
                printf("%c", word[k]);
            if (str[i] == ' ')
                printf(" ");
            j = 0;
        } else {
            word[j++] = str[i];
        }
    }
    return 0;
}
