#include <stdio.h>

int main() {
    int c, chn;

    c = chn = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (chn > 0) {
                putchar('\n');
                chn = 0;
            }
        } else {
            chn++;
            putchar(c);
        }
    }

    return 0;
}