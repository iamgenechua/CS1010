#include <stdio.h>
#include <math.h>

int is_prime(int);
int count_primes(int);

int is_prime(int num) {
    if (num == 1) {
        return 1;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if ((num % i) == 0) {
            return 1; // is not a prime
        }
    }
    return 0; // is a prime
}

int count_primes(int limit) {
    int count = 0;
    for (int i = 1; i <= limit; i++) {
        if (is_prime(i) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Number of primes (1-%d): %d\n", limit, count_primes(limit));
}