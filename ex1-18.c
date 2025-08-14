#include <stdio.h>

#define MAXLINE 100000

int getline(char line[], int maxline);

void copy(char to[], char from[], int index);

int main() {
    char line1[MAXLINE];
    char final[MAXLINE];
    while (getline(line1, MAXLINE) > 1) {
        printf("\n%s", line1);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i = 0;

    for (i; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
    }

    for (i; i > 0 && ((c = s[i-1]) == ' ' || c == '\t'); --i) {
        s[i] = '\0';
    }

    s[i] = '\0';
    i += 1;
    return i;
}