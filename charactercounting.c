#include <stdio.h>

int main() {
    int c;
    for (c = 0; getchar() != EOF; ++c) {
        ;
    }
    printf("%d\n", c);
}