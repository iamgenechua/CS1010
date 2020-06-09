#include <stdio.h>
char generateCode(int nric);

char generateCode(int nric) {
    int step1 = 0;
    int weights[] = {2, 7, 6, 5, 4, 3, 2};
    for (int i = sizeof(weights)/sizeof(weights[0]) - 1; i >= 0; i--) {
        step1 += (nric % 10) * weights[i];
        nric = nric / 10;
    }

    int step2 = step1 % 11;
    int step3 = 11 - step2;

    switch(step3) {
        case 1:
            return 'A';
            break;
        case 2:
            return 'B';
            break;
        case 3:
            return 'C';
            break;
        case 4:
            return 'D';
            break;
        case 5:
            return 'E';
            break;
        case 6:
            return 'F';
            break;
        case 7:
            return 'G';
            break;
        case 8:
            return 'H';
            break;
        case 9:
            return 'I';
            break;
        case 10:
            return 'Z';
            break;
        case 11:
            return 'J';
            break;
        default:
            return 'Q';
            break;
    }
}

int main() {
    int nric;
    printf("Enter 7-digit NRIC number: ");
    scanf("%d", &nric);
    printf("Check code is %c\n", generateCode(nric));
    return 0;
}