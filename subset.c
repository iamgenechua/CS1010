#include <stdio.h>
#include <string.h>
int isSubset(int arrA[], int sizeA, int arrB[], int sizeB);

int isSubset(int arrA[], int sizeA, int arrB[], int sizeB) {
    int count = 0;
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (arrA[i] == arrB[j]) {
                count++;
                break;
            }
        }
    }
    if (count == sizeA) {
        return 1;
    } else {
        return 0;
    }
}



int main() {
    int first1, first2, first3, first4;
    int second1, second2, second3, second4, second5, second6, second7;
    printf("1st array: ");
    printf("Enter 4 values: ");
    scanf("%d %d %d %d", &first1, &first2, &first3, &first4);
    printf("2nd array: ");
    printf("Enter 7 values: ");
    scanf("%d %d %d %d %d %d %d", &second1, &second2, &second3, &second4, &second5, &second6, &second7);
    int aArray[] = {first1, first2, first3, first3};
    int bArray[] = {second1, second2, second3, second4, second5, second6, second7};

    if (isSubset(aArray, sizeof(aArray)/sizeof(*aArray), bArray, sizeof(bArray)/sizeof(*bArray)) == 1) {
        printf("arrayA[0..3] is a subset of arrayB[0..6]\n");
    } else {
        printf("arrayA[0..3] is not a subset of arrayB[0..6]\n");
    }

    return 0;
}