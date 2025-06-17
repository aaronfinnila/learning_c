#include <stdio.h>

int tempconv(int step, int high, int low);

int main() {
    tempconv(20, 200, 0);
}

int tempconv(int step, int high, int low) {
    float cels, fahr;

    fahr = low;

    printf("\nTemperatures in fahrenheit and celsius\n\n");

    while (fahr <= high) {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }
}