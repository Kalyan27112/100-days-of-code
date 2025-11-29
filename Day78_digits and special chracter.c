Q128 (File Handling)
//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[] = "data.txt";   // file name to keep
    int ch;
    int vowels = 0, consonants = 0;

    // Open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read characters
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            // Check if vowel
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
        // Ignore digits and special characters
    }

    fclose(fp);

    printf("File: %s\n", filename);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
