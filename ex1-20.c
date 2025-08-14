#include <stdio.h>

#define MAX 10000

int main() {
    int i = 0;
    int c = 0;
    int rem = 0;
    int n = 8;
    char array[MAX];
    for (i; i < MAX && (c = getchar()) != EOF; ++i) {
        if (i == n) {
            n += 8;
        }
        if (c == '\t') {
            if ((rem = n - i) != 0) {
                for (int j = 0; j < rem; j++) {
                    array[i] = ' ';
                    if (j + 1 != rem) {
                        i++;
                    }
                    if (i == n) {
                        n += 8;
                    }
                }
            }
        } else {
            array[i] = c;
        }
    }

    for (int x = 0; x <= i; x++) {
        int z = array[x];
        if (z == ' ') {
            printf("\nblank");
        } else {
        printf("\n%c", z);
        }
    }
    return 0;
}