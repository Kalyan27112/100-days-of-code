#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "notes.txt";   // File name we keep
    char text[500];

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Get text from user
    printf("Enter a line to append: ");
    getchar(); // Clear leftover newline if needed
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}
