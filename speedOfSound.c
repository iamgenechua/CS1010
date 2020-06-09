#include <stdio.h>
#include <math.h>
double speed_of_sound(double temperature);

double speed_of_sound(double temperature) {
    double inside = (5 * temperature + 297) / 247;
    double res = 1086 * sqrt(inside);
    return res;
}

int main() {
    double temperature;
    printf("Temperature in degree Fahrenheit: ");
    scanf("%lf", &temperature);
    printf("Speed of sound in air of %.2lf degree = %.2lf ft/sec\n", temperature, speed_of_sound(temperature));
}