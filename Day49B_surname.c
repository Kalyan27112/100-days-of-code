//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100], words[10][50];
    int i = 0, j = 0, k = 0, count = 0;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[count][j] = '\0';
            count++;
            j = 0;
        } else {
            words[count][j++] = name[i];
        }
    }
    words[count][j] = '\0';
    for (k = 0; k < count; k++)
        printf("%c. ", words[k][0]);
    printf("%s", words[count]);
    return 0;
}
