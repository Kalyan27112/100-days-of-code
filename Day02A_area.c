Q3 (User Inputs, Operations & Output)
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%lf", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of the rectangle = %.2lf\n", area);
    printf("Perimeter of the rectangle = %.2lf\n", perimeter);

    return 0;
} 
