#include <stdio.h>
#include <string.h>

int main() {

    printf("char:\n");

    for (int i = 0; i < 128; i++) {
        printf("%c", i);
    }

    printf("\nint short (every 10k):\n");

    for(short i = 0; i < 32000; i++) {
        if (i % 10000 == 0) {
            printf("%d", i);
        }
    }

    printf("\nint long (every 100mil):\n");

    int j = 0;
    for (long i = 0; i < 2094900000; i++) {
        if (i % 10000 == 0) {
            j++;
        }
    }
    printf("%d", j);

    printf("\ndouble\n");
    
    float dob = 3.1485897283495193498f;
    printf("%f", dob);

    return 0;
}