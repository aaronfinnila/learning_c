#include <stdio.h>

int main() {
    char first[1000] = {0};
    char second[1000] = {0};
    int c;
    int num = 0;
    printf("\n%d", num);

    while ((c = getchar()) != EOF) {
        if (c != '\t' && c != ' ' && c != '\n') {
            first[num] = c;
            num++;
        }
    }


    for (int i=0;i<1000;i++) {
        if (first[i] != 0) {
            putchar(first[i]);
        }
    }


    return 0;
}