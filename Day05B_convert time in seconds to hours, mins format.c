Q10 (User Inputs, Operations & Output)
//Write a program to input time in seconds and convert it to hours:minutes:seconds format.#include <stdio.h>
int main() {
    int seconds, hours, minutes;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Time is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
