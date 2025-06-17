#include <stdio.h>

int main() {
    int c;
    int arr[256] = {0};

    while ((c = getchar()) != EOF) {
        if (c != 32 && c != 10) {
            arr[c]++;
        }
    }

    printf("\n");

    for (int i=0;i<256;i++) {
        if (arr[i] != 0) {
            char ch = (char)i;
            printf("%c ", ch);
            for (int j=0;j<arr[i];j++) {
                printf("X");
            }
            printf("\n");
        }
    }
}