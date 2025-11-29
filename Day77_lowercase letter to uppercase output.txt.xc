Q127 (File Handling)
//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and
writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        printf("Error: Could not open output.txt\n");
        return 1;
    }

    // Read from input and write to output
    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);  // convert to uppercase
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Output written to output.txt\n");

    return 0;
}
