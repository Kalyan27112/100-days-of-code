//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long n;
    int count[10] = {0}, max = 0, digit, i;
    printf("Enter an integer: ");
    scanf("%ld", &n);
    if(n < 0) n = -n;
    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++)
        if(count[i] > max)
            max = count[i];
    printf("Digit(s) occurring most (%d times): ", max);
    for(i = 0; i < 10; i++)
        if(count[i] == max)
            printf("%d ", i);
    return 0;
}
