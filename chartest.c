#include <stdio.h>

int main() {
    int c, nl, bl, ta;

    nl = 0;
    bl = 0;
    ta = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ') {
            ++bl;
        }
        if (c == '\t') {
            ++ta;
        }
    }
    printf("Newlines: ");
    printf("%d\n", nl);
    printf("Blanks: ");
    printf("%d\n", bl);
    printf("Tabs: ");
    printf("%d\n", ta);
}