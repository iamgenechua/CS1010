#include <stdio.h>
int compute_percentile(int, int, int);
double compute_iqscore(int, int);

int compute_percentile(int verbal, int math, int writing) {
    int total = verbal + math + writing;
    if (total >= 2200) {
        return 99;
    } else if (total >= 2000) {
        return 95;
    } else if (total >= 1500) {
        return 50;
    } else {
        return 10;
    }
}

double compute_iqscore(int verbal, int math) {
    double iq = (0.095 * math) + (0.003 * verbal) + 50.241;
    return iq;
}

int main() {
    int verbal, math, writing;
    printf("Enter scores: ");
    scanf("%d %d %d", &verbal, &math, &writing);
    
    int percentile = compute_percentile(verbal, math, writing);
    double iq = compute_iqscore(verbal, math); 
    
    char amazing[] = "Wow, this is amazing!";

    printf("The SAT score is in the %d percentile\n", percentile);
    printf("The IQ score is %.2lf\n", iq);

    if ((verbal > 600 && math > 600 && writing > 600) || iq >= 120) {
        printf("%s\n", amazing);
    }
}