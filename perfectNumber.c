#include <stdio.h>
int is_perfect(int);

int is_perfect(int number) {
    int divisorSum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            divisorSum += i;
        }
    }
    if (divisorSum == number) {
        return 1; // perfect
    } else {
        return 0; // not perfect
    }
}

int main () {
    int number = -1;
    while (number != 0) {
        printf("Enter number: ");
        scanf("%d", &number);
        if (is_perfect(number) == 1) {
            printf("%d is a perfect number.\n", number);
        } else {
            printf("%d is not a perfect number.\n", number);
        }
    }
}