Q122 (File Handling)
//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
The program should print all the lines to the consoleuntil EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[1000];

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}
