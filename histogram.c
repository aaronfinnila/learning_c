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

    for (int i=0;i<15;i++) {
        printf("%d ", i);
        for (int j=0;j<lengths[i];j++) {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}