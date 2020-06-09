#include <stdio.h>

int main() {
    int count = 0;
    int value;
    printf("Enter integers, terminate with ctrl-d\n");
    while (scanf("%d", &value) == 1) {
        count++;
    }
    printf("Number of values entered = %d\n", count);
}