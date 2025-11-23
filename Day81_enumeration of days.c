#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days day;

    printf("Day\t\tValue\n");
    printf("-------------------------\n");

    for (day = SUNDAY; day <= SATURDAY; day++) {
        switch (day) {
            case SUNDAY:    printf("SUNDAY\t\t%d\n", day); break;
            case MONDAY:    printf("MONDAY\t\t%d\n", day); break;
            case TUESDAY:   printf("TUESDAY\t\t%d\n", day); break;
            case WEDNESDAY: printf("WEDNESDAY\t%d\n", day); break;
            case THURSDAY:  printf("THURSDAY\t%d\n", day); break;
            case FRIDAY:    printf("FRIDAY\t\t%d\n", day); break;
            case SATURDAY:  printf("SATURDAY\t%d\n", day); break;
        }
    }

    return 0;
}
