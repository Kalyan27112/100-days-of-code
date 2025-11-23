#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char line[500];

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // Read and display file content
    printf("\n--- File Content (%s) ---\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
