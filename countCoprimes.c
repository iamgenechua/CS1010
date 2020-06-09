#include <stdio.h>
int pairUp(int);
int gcdEuclid(int, int);

int pairUp(int limit) {
    int answer = 0;
    for (int i = 2; i <= limit - 1; i++) {
        for (int j = i + 1; j <= limit; j++) {
            if (gcdEuclid(i, j) == 1) {
                answer++;
            }
        }
    }
    return answer;
}

int gcdEuclid(int i, int j) {
    if (j == 0) {
        return i;
    } else {
        return gcdEuclid(j, i % j);
    }
}

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Answer = %d\n", pairUp(limit));
}