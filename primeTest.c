#include <stdio.h>
#include <math.h>

int is_prime(int);

int is_prime(int num) {
    if (num == 1) {
        return 1;
    }

    for (int i = 2; i < sqrt(num); i++) {
        if ((num % i) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (is_prime(num) == 1) {
        printf("%d is not a prime\n", num);
    } else {
        printf("%d is a prime\n", num);
    }
    return 0;
}