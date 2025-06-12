#include <stdio.h>

int main() {
    float cels, fahr;
    float low, step, high;

    step = 10;
    high = 100;
    low = 0;
    cels = low;

    printf("Temperatures from celsius to fahrenheit\n\n");

    while (cels <= high) {
        fahr = cels/(5.0/9.0)+32;
        printf("%3.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }
}