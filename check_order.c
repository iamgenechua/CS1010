#include <stdio.h>

int main() {
    int number = -1;
    int next;
    int flag = 1; // 1 is increasing order;
    while (number != 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &next);
        if (next == 0) {
            break;
        } else if (next <= number) {
            flag = 0;
            break;
        }
        number = next;
    }
    if (flag == 1) {
        printf("Data are in increasing order.\n");
    } else {
        printf("Data are not in increasing order.\n");
    }
}