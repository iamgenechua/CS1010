#include <stdio.h>
int get_magic(int number);

int get_magic(int number) {
    int answer = 0;
    while (number > 0) {
        answer += (number % 10);
        number = number / 100;
    }
    return answer % 10;
}

int main() {
    int firstVal, secondVal;
    printf("Enter 1st value: ");
    scanf("%d", &firstVal);
    printf("Magic number = %d\n", get_magic(firstVal));
    printf("Enter 2nd value: ");
    scanf("%d", &secondVal);
    printf("Magic number = %d\n", get_magic(secondVal));
}