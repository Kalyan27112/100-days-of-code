#include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
