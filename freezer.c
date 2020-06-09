#include <stdio.h>
double temperature(double time);

double temperature(double time) {
    double num = 4 * time * time;
    double den = time + 2;
    double res = (num/den) - 20;
    return res;
}

int main() {
    double hours;
    double minutes;
    printf("Enter hours and minutes since power failure: ");
    scanf("%lf %lf", &hours, &minutes);
    minutes = minutes / 60;
    printf("%.2lf\n", temperature(hours + minutes));
}