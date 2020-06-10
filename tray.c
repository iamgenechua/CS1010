#include <stdio.h>
int min_unused_area(int, int, int, int);
void swap(int*, int*);
double min_perimeter(int, int);

int min_unused_area(int trayLength, int trayWidth, int slabLength, int slabWidth) {
    if (trayLength < trayWidth) {
        swap(&trayLength, &trayWidth);
    }
    if (slabLength < slabWidth) {
        swap(&slabLength, &slabWidth);
    }

    int totalArea = trayLength * trayWidth;
    int maxLengthCoverage = trayLength - (trayLength % slabLength);
    int maxWidthCoverage = trayWidth - (trayWidth % slabWidth);

    int totalCoverage = maxLengthCoverage * maxWidthCoverage;
    int minUnusedArea = totalArea - totalCoverage;
    if (minUnusedArea < 0) {
        return 0;
    } else {
        return minUnusedArea;
    }
}

void swap (int *length, int *width) {
    int temp = *length;
    *length = *width;
    *width = temp;
}

double min_perimeter(int tL, int tW) {
    double trayLength = (double) tL;
    double trayWidth = (double) tW;
    for (int i = 0; i < 3; i++) {
        if (trayLength > trayWidth) {
            trayLength = trayLength / 2.0;
        } else {
            trayWidth = trayWidth / 2.0;
        }
    }
    return trayLength * 2.0 + trayWidth * 2.0;
}


int main() {
    int trayLength, trayWidth, slabLength, slabWidth;
    printf("Enter size of tray: ");
    scanf("%d %d", &trayLength, &trayWidth);
    printf("Enter size of slab: ");
    scanf("%d %d", &slabLength, &slabWidth);

    int minUnusedArea = min_unused_area(trayLength, trayWidth, slabLength, slabWidth);
    printf("Minimum unused area = %d\n", minUnusedArea);

    double minPerimeter = min_perimeter(trayLength, trayWidth);
    printf("Minimum perimeter after folding = %.2lf\n", minPerimeter);
    return 0;
}