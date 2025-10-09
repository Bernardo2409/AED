#include <stdio.h>
#include <assert.h>

int numbers(int a[], int size);

int main(void) {
    int a[] = {3, 2, 3, 4, 5, 6};
    int contador = numbers(a, 6);
    printf("Resultado: %d\n", contador);
    return 0;
}

int numbers(int a[], int size ) {

    assert(size > 2);
    int counter = 0; int comp = 0;
    for ( int i = 1; i < size -1; i++) {
        comp++;
        if ( a[i] == a[i-1] + a[i+1]) {

            counter++;
        }

    };

    printf("Comparações: %d \n", comp);
    return counter;
}