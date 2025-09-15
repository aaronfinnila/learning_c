#include <stdio.h>
#include <string.h>

int squeeze(char s[], char arr[]);

int main() {
    char str[] = "hellocatdog";
    char arr[] = "zxyc";
    int result = squeeze(str, arr);
    printf("%d", result);
    return 0;
}

int squeeze(char s[], char arr[]) {
    int i, j, h;
    for (i = j = 0; s[i] != '\0'; i++) {
        for (h = 0; arr[h] != '\0'; h++) {
            if (s[i] == arr[h]) {
                return i;
            }
        }
        s[j++] = s[i];
    }
    return -1;
}