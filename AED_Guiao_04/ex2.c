#include <stdio.h>
#include <assert.h>

// Declaração da função
int numbers(int a[], int size);

int main(void) {
    int a[] = {1, 2, 4, 8, 16, 32};
    int verif = numbers(a, 6);
    printf("Resultado: %d\n", verif);
    return 0;
}

int numbers(int a[], int size ) {

    assert(size > 2);
    int oper = 0;
    int r = a[1] / a[0];

    for ( int i = 1; i < size ; i++) {

        oper++;
        if ( a[i] != r * a[i-1]) {
            return 0;
        }

    };

    return 1;
}