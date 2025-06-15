#include <stdio.h>

int main() {
    int occ[12] = {0};
    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') {
            occ[10]++;
        } else if (c > 47 && c < 58) {
            occ[c-48]++;
        } else {
            occ[11]++;
        }
    }

    for (int i=0;i<12;i++) {
        printf("%d\n", occ[i]);
    }

    return 0;
}