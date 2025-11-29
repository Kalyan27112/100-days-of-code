Q129 (File Handling)
//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute
their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";   // file name we keep
    int num, count = 0;
    long long sum = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read integers from the file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        double avg = (double)sum / count;

        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", avg);
    }

    return 0;
}
