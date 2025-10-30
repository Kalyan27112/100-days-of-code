#include <stdio.h>
#define PI 3.14159   // Define constant value of PI

int main() {
    double radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area of the circle = %.2lf\n", area);
    printf("Circumference of the circle = %.2lf\n", circumference);

    return 0;
} 
