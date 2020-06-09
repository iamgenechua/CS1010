#include <stdio.h>
int count_numbers(int, int, int, int);

int count_numbers(int div1, int div2, int lim1, int lim2) {
    int count = 0;
    for (int i = lim1; i <= lim2; i++) {
        if (i % div1 != 0 && i % div2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int div1 = -1, div2 = -1;
    
    while(div1 < 0 || div2 < 0 || div1 == div2) {
        printf("Enter 2 divisors: ");
        scanf("%d %d", &div1, &div2);
    }

    int lim1 = -1, lim2 = -1;
    while (lim1 < 0 || lim2 < 0 || lim1 >= lim2) {
        printf("Enter lower and upper limits: ");
        scanf("%d %d", &lim1, &lim2);
    }

    printf("Answer = %d\n", count_numbers(div1, div2, lim1, lim2));
}