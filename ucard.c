#include <stdio.h>
int luhnah(int);
int digitBreaker(int);
int issued(int);

int luhnah(int cardNum) {
    int checkNumber = 0;
    int odd = 1;
    while (cardNum > 0) {
        if (odd == 1) { // is an odd position
            checkNumber += cardNum % 10;
        } else {
            int doubled = (cardNum % 10) * 2;
            checkNumber += digitBreaker(doubled);
        }
        cardNum = cardNum / 10;
        odd = odd == 1 ? 0 : 1;
    }
    return checkNumber;
    
}

int digitBreaker(int digit) {
    int sum = 0;
    while (digit > 0) {
        sum += digit % 10;
        digit = digit / 10;
    }
    return sum;
}

int issued(int cardNum) {
    while (cardNum >= 100) {
        cardNum = cardNum / 10;
    }
    return cardNum;
}

int main() {
    int cardNum;
    printf("Enter uCard Number: ");
    scanf("%d", &cardNum);
    int checkNumber = luhnah(cardNum);
    printf("The check number is %d\n", checkNumber);
    if (checkNumber % 7 == 0) {
        printf("Valid\n");

        int branch = issued(cardNum);
        char pre[] = "Issued by";

        if (branch >= 31 && branch <= 35) {
            printf("%s East branch\n", pre);
        } else if (branch >= 51 && branch <= 55) {
            printf("%s West branch\n", pre);
        } else {
            printf("%s Central branch\n", pre);
        }
    } else {
        printf("Invalid\n");
    }
    
}