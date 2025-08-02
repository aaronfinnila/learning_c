#include <stdio.h>

#define MAXLINE 100000

int getline(char line[], int maxline);

void copy(char to[], char from[], int index);

int main() {
    int len;
    int min;
    int index1 = 0;
    char line[MAXLINE];
    char longer[MAXLINE];
    min = 80;

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > min) {
            copy(longer, line, index1);
            index1 = index1 + len;
            printf("%d len value", len);
        }
    }

    if (longer[0] != '\0') {
        printf("\nLines longer than 80:\n\n");
        printf("%s", longer);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[], int index) {
    int i = 0;
    int j = index;
    while ((to[j] = from[i]) != '\0') {
    ++i;
    ++j;
    }
}