#include <stdio.h>
#include <assert.h>

int numbers(int a[], int size);

int main(void) {
    int a[] = {1, 3, 5, 4, 2, 1};
    int verif = numbers(a, 6);
    printf("Resultado: %d\n", verif);
    return 0;
}

int numbers(int a[], int size ) {

    assert(size > 2);
    int counter = 0;
    int oper = 0;
    int n = 0;


    for ( int i = a[n] ; i < size - 2 ; n++ ) {

        oper++;




    };

    printf("Operações %d \n", oper);
}