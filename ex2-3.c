#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char hexadigits[]);

int main() {

    char array[] = "0";
    int result = htoi(array);
    printf("%d", result);
    return 0;
}

int htoi(char hexadigits[]) {
    int counter = 0;
    for (int i = 0; i < strlen(hexadigits); i++) {
        int len = strlen(hexadigits);
        char c = hexadigits[i];
        int num = 0;
        if (c > 47 && c < 58) {
            num = c - 48;
        } else if (c > 64 && c < 71) {
            num = c - 55;
        } else {
            num = c - 87;
        }
        num = num * (int)pow(16, len-i-1);
        counter += num;
    }
    return counter;
}