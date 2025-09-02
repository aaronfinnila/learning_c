#include <stdio.h>
#include <stdbool.h>

#define MAX 10000

void processarray(char in[], char out[], int max);

void printresult(char final[], int i);

int main() {
    int i = 0;
    int c = 0;
    char array_in[MAX];
    char array_final[MAX];

    for (i; i < MAX && (c = getchar()) != EOF; ++i) {
        array_in[i] = c;
    }

    processarray(array_in, array_final, i);
    printresult(array_final, i);
    return 0;
}

void processarray(char in[], char out[], int max) {
    int i = 0;
    int h = 0;
    int ch = 0;
    int tabspace = 7;
    int rem = 0;

    for (i; i < max; ++i) {
        ch = in[i];
        int dist = max;
        if (h >= tabspace) {
            tabspace += 8;
        }
        rem = tabspace - h;
        if (ch == ' ') {
            for (int j=1;j<9;++j) {
                if (in[i+j] != ' ') {
                    dist = j;
                    break;
                }
            }
            if (dist >= rem && rem > 1) {
                out[h++] = '\t';
                i += rem - 1;
            } else {
                out[h++] = ' ';
            }
        } else {
            out[h++] = ch;
        }
        printf("\ndist: %d, rem: %d, tabspace: %d, i: %d \n", dist, rem, tabspace, i);
    }
}

void printresult(char final[], int i) {
    for (int x = 0; x <= i; x++) {
        int z = final[x];
        if (z == ' ') {
            printf("\nblank");
        } else if (z == '\t') {
        printf("\ntab");
        } else {
            printf("\n%c", z);
        }
        printf("%d", x);
    }
    printf("%s", final);
}