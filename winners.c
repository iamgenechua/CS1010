#include <stdio.h>
int countFactors(int, int, int);
int countMustHaves(int, int);

int countFactors(int factor, int mustHave, int participants) {
    int count = 0;
    for (int i = 0; i <= participants; i += factor) {
        if (countMustHaves(i, mustHave) == 1) {
            count++;
        }
    }
    return count;
}

int countMustHaves(int number, int mustHave) {
    while (number > 0) {
        int digit = number % 10;
        if (digit == mustHave) {
            return 1; // contains the digit
        }
        number = number / 10;
    }
    return 0; // doesn't contain the digit
}

int main() {
    int factor, mustHave, participants;
    printf("Enter factor-digit: ");
    scanf("%d", &factor);
    printf("Enter must-have-digit: ");
    scanf("%d", &mustHave);
    printf("Enter number of participants: ");
    scanf("%d", &participants);
    printf("Number of winners: %d\n", countFactors(factor, mustHave, participants));
    return 0;
}