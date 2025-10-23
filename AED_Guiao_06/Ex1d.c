#include <stdio.h>

int D(int m, int n);

int main(void) {
    printf("%d\n", D(0,0));
    printf("%d\n", D(20,20));
    return 0;
}

int D(int m, int n) {
    if(m == 0 || n == 0) {
        return 1;
    } else {    
        return D(m-1, n) + D(m-1, n-1) + D(m, n-1);
    }
}