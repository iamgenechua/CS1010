#include <stdio.h>
int isAscending(int, int, int);

int isAscending(int num1, int num2, int num3) {
    num1 = (num1 % 1000) / 100;
    num2 = (num2 % 1000) / 100;
    num3 = (num3 % 1000) / 100;
    if (num1 < num2 && num2 < num3) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int num1, num2, num3;
    printf("Enter 3 positive integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The integers are %d, %d and %d", num1, num2, num3);
    if (isAscending(num1, num2, num3) == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}