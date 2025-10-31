//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (j > max) {
                max = j;
                strcpy(longest, word);
            }
            j = 0;
        } else {
            word[j++] = str[i];
        }
    }
    printf("Longest word: %s", longest);
    return 0;
}
