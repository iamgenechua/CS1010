#include <stdio.h>
void printSuffix(int);

void printSuffix(int value) {
    int ones = value % 10;
    int hundreds = (value % 100) / 10;
    if (ones == 1 && hundreds != 1) {
        printf("%dst\n", value);
    } else if (ones == 2 && hundreds != 1) {
        printf("%dnd\n", value);
    } else if (ones == 3 && hundreds != 1) {
        printf("%dnd\n", value);
    } else {
        printf("%dth\n", value);
    }
}
 
int main() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    printSuffix(value);
}