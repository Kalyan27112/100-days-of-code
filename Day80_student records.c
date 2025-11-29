Q130 (File Handling)
//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "students.txt";   // File name we keep
    int n;

    // Ask how many student records to store
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write student records
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        printf("\nEnter name: ");
        scanf("%s", name);   // assuming no spaces in name
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Read and display records
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    char name[50];
    int roll;
    float marks;

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
