#include <stdio.h>
int computeDays(int, int);

int computeDays(int day, int month) {
    int days = 0;
    switch(month) {
        case 12:
            days += 30;
        case 11:
            days += 31;
        case 10:
            days += 30;
        case 9:
            days += 31;
        case 8:
            days += 31;
        case 7:
            days += 30;
        case 6:
            days += 31;
        case 5:
            days += 30;
        case 4:
            days += 31;
        case 3:
            days += 28;
        case 2:
            days += 31;
        case 1:
            days += 0;
        default:
            days += 0;
            break;
    }
    days += day;
    return days;
}

int main() {
    int day, month;
    printf("Enter day and month: ");
    scanf("%d %d", &day, &month);

    printf("Day %d of month %d is the %dth day of 2017\n", day, month, computeDays(day, month));
    return 0;
}