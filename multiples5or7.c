#include <stdio.h>
int count_multiples(int);

int count_multiples(int value) {
    int count = 0;
    for (int i = 1; i <= value; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int value;
    printf("Enter a positive integer: ");
    scanf("%d", &value);
    int num_mult = count_multiples(value);
    if (num_mult == 1) {
        printf("There is %d multiple of 5 or 7 in [1,%d].\n", num_mult, value);
    } else if (num_mult == 0) {
         printf("There are no multiples of 5 or 7 in [1,%d].\n", value);
    } else {
        printf("There are %d multiples of 5 or 7 in [1,%d].\n", num_mult, value);
    }
    
}