#include <stdio.h>

int main() {
    int c, li, wo, ch, chn;

    c = wo = ch = chn = 0;
    li = 1;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (chn > 0) {
                wo++;
                chn = 0;
            }
            if (c == '\n') {
                li++;
            }
        } else {
            ch++;
            chn++;
        }
    }

    if (chn > 0) { 
        wo++;
    }
    
    printf("Words: ");
    printf("%d\n", wo);
    printf("Lines: ");
    printf("%d\n", li);
    printf("Characters: ");
    printf("%d\n", ch);

    return 0;
}