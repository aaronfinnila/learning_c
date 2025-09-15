#include <stdio.h>

unsigned int invert(unsigned int x, int p, int n);

int main() {
    
    unsigned int x = 89; // 01011001
    int n = 3;
    int p = 4;
    unsigned int result = invert(x, p, n);
    
    printf("\nresult: %u", result);

    return 0;
}

unsigned int invert(unsigned int x, int p, int n) {

    unsigned int mask = (~(~0u << n)) << p+1-n;

    unsigned int invertednums = (~x & mask);

    unsigned int result = (x & ~mask) | invertednums;

    return result;
}