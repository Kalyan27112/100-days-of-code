#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[] = "data.txt";   // file name to keep
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        // Detect word boundaries
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("File: %s\n", filename);
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
