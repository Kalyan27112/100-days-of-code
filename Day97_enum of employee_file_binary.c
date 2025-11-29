Q147 (Enum)
//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp, emp_read;
    FILE *fp;

    // Input from user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display the data read from file
    printf("\n--- Employee Data Read from File ---\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joiningDate.day,
           emp_read.joiningDate.month,
           emp_read.joiningDate.year);

    return 0;
}
