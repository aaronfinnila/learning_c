#include <stdio.h>
#include <string.h>

void squeeze(char s[], char arr[]);

int main() {
    char str[] = "hellocatdog";
    char arr[] = "catdogl";
    printf("\nbefore: %s", str);
    squeeze(str, arr);
    printf("\nafter: %s", str);
    return 0;
}

void squeeze(char s[], char arr[]) {
    int i, j, h, found;
    for (i = j = 0; s[i] != '\0'; i++) {
        found = 0;
        for (h = 0; arr[h] != '\0'; h++) {
            if (s[i] == arr[h]) {
                found = 1;
            }
        }
        if (found == 0) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}