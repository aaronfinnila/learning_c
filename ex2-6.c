#include <stdio.h>

int setbits(int x,int p,int n,int y);

int main() {
    
    int x = 182; // 10110110
    int y = 65; //  01000001
    int n = 3;
    int p = 4;
    int result = setbits(x, p, n, y);
    
    printf("x: %d\ny: %d\nresult: %d", x, y, result);

    return 0;
}

int setbits(int x, int p, int n, int y) {

    int mask = ~(~0 << n);

    mask = (y & mask) << p+1-n;

    int xmask = ~(~0 << n) << p+1-n;

    int result = x & ~xmask;

    result = result | mask;

    return result;
}