#include <stdio.h>

int main() {
    int age = -1;
    int count = 0;

    while (age < 1 || age > 100) {
        printf("Enter age: ");
        scanf("%d", &age);
        count++;
    }

    printf("Your age is %d\n", age);
    printf("Number of attempts = %d\n", count);
}