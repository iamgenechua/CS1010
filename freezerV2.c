#include <stdio.h>
#include <math.h>
double temperature(double time);

double temperature(double time) {
    double num = 4 * pow(time, 10);
    double den = pow(time, 9) + 2;
    double res = (num/den) - 20;
    return res;
}

int main() {
    double hours;
    double minutes;
    printf("Enter hours and minutes since power failure: ");
    scanf("%lf %lf", &hours, &minutes);
    printf("Temperature in freezer = %.2lf\n", temperature(hours + minutes/60));
    return 0;
}