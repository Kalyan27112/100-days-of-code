Q124 (File Handling)
//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file
using fgetc() and fputc().

#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    // Take file names from the user
    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", srcFile);
        return 1;
    }

    // Open destination file
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error: Could not open destination file %s\n", destFile);
        return 1;
    }

    // Copy content using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    return 0;
}
