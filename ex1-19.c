#include <stdio.h>

#define MAXLINE 100000

int getline(char line[], int maxline);

void reverse(char in[], char out[], int length);

int main() {
    char line1[MAXLINE];
    char final[MAXLINE];
    int len;
    while ((len = getline(line1, MAXLINE)) > 1) {
        reverse(line1, final, len);
        printf("\nInput line:\n\n%s\n\nOutput line:\n%s\n", line1, final);
    }

    return 0;
}

int getline(char line[], int maxline) {
    int c, i = 0;

    for (i; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void reverse(char in[], char out[], int length) {
    int i = length-1;
    int j = 0;

    for (j; j <= length-1; ++j) {
        out[j] = in[i];
        i--;
    }
}