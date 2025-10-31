//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[20], month[3], result[30];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int d, m, y;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    sprintf(result, "%02d-%s-%d", d, months[m-1], y);
    printf("Formatted date: %s", result);
    return 0;
}
