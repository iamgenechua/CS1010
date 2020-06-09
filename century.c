#include <stdio.h>
void printCentury();
void printOrdinal(int, int);

void printCentury() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int century = (year / 100) + 1;
    printOrdinal(century, year);
}

void printOrdinal(int century, int year) {
    int ones = century % 10;
    int hundreds = (century % 100) / 10;
    if (ones == 1 && hundreds != 1) {
        printf("The year %d falls in the %dst century.\n", year, century);
    } else if (ones == 2 && hundreds != 1) {
        printf("The year %d falls in the %dnd century.\n", year, century);
    } else if (ones == 3 && hundreds != 1) {
        printf("The year %d falls in the %drd century.\n", year, century);
    } else {
        printf("The year %d falls in the %dth century.\n", year, century);
    }
}

int main() {
    printCentury();
}