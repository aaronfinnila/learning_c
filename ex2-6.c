#include <stdio.h>

int setbits(int x,int p,int n,int y);

int main() {
    
    int x = 24; // 00011000
    int y = 71; // 01000111
    int n = 3;
    int p = 4;
    int result = setbits(x, p, n, y);
    
    printf("x: %d\ny: %d\nresult: %d", x, y, result);

    return 0;
}

int setbits(int x, int p, int n, int y) {

    

    return (x >> (p+1-n)) & ~(~0 << n);
}