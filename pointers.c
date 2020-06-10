#include <stdio.h>
#include <math.h>

int main() {
    int a, *a_ptr;
    float b, *b_ptr;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a real number: ");
    scanf("%f", &b);

    a_ptr = &a;
    b_ptr = &b;

    printf("Values entered are %d and %.2f\n", *a_ptr, *b_ptr);

    while (*a_ptr < pow(*b_ptr, 2)) {
        *a_ptr = *a_ptr * *b_ptr;
    }
    printf("Final value of a = %d\n", *a_ptr);
}