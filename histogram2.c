#include <stdio.h>

int main() {
    int lengths[15] = {0};
    int c, chn, wor;

    c = chn = wor = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (chn > 0) {
                wor++;
                lengths[chn]++;
                chn = 0;
            }
        } else {
            chn++;
        }
    }

    if (chn > 0) { 
        wor++;
        lengths[chn]++;
    }

    printf("\n");

    for (int i=14;i>0;i--) {
        printf("%2d | ", i);
        for (int j=0;j<15;j++) {
            if (lengths[j] >= i) {
                printf("X ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
        if (i == 1) {
            printf("    ----------------------------------\n");
            printf("     0 1 2 3 4 5 6 7 8 9 10 11 12 13 14\n");
        }
    }

    return 0;
}