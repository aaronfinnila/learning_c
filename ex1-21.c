#include <stdio.h>
#include <stdbool.h>

#define MAX 10000

int main() {
    int i = 0;
    int c = 0;
    int n = 7;
    bool blankcount = false;
    char array[MAX];

    for (i; i < MAX && (c = getchar()) != EOF; ++i) {
        if (i == n) {
            n += 8;
            blankcount = false;
        }
        if (c == ' ') {
            if (blankcount == false) {
            array[i] = '\t';
            blankcount = true;
            } else {
                array[i] = c;
            }
        } else {
            array[i] = c;
            blankcount = false;
        }
    }

    for (int x = 0; x <= i; x++) {
        int z = array[x];
        if (z == ' ') {
            printf("\nblank");
        } else if (z == '\t') {
        printf("\ntab");
        } else {
            printf("\n%c", z);
        }
        printf("%d", x);
    }

    for (int x = 0; x <= i; x++) {
        int z = array[x];
        printf("%c", z);
    }
    return 0;
}