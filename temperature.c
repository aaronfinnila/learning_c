#include <stdio.h>

int main() {
    float cels, fahr;
    float low, step, high;

    step = 20;
    high = 200;
    low = 0;
    fahr = low;

    printf("Temperatures in fahrenheit and celsius\n\n");

    while (fahr <= high) {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}