#include <stdio.h>

int main() {
    int no_of_days, years, months, weeks, remainingDays;

    printf("Enter the total number of days: ");
    scanf("%d", &no_of_days);

    years = no_of_days / 365;

    remainingDays = no_of_days % 365;

    months = remainingDays / 30;

    remainingDays %= 30;

    weeks = remainingDays / 7;

    remainingDays %= 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}

