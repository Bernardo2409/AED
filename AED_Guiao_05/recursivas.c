#include <stdio.h>
#include <assert.h>

int calls;


int FunctionT1(int n) {
    
    assert(n > 0);
    calls++;

    if (n == 1) {
        return 1;
    } else {
        return FunctionT1(n / 2) + 1;
    }

}

int FunctionT2(int n) {

    assert( n > 0);
    if (n == 1) {
        return 1;
    } else {
        return FunctionT2(n/2) + FunctionT2(n/2) + 1 ;
    }
}

int FunctionT3 (int n) {

    assert ( n > 0);
    if (n == 1) {
        return 1;
    } else if ( n%2 == 0) {

        return FunctionT3(n/2) + FunctionT3(n/2) + 1;
    } else {
        return 2 * FunctionT3(n/2) + 1;
    }

}   


int main (void) {


    printf(" Função 1 \n");

    for(int c = 1; c < 15;  c++) {
        printf(" n = %d  ", c);
        printf("Valor: %d  "  ,FunctionT1(c)  );
        printf( "Chamadas: %d \n" ,calls);
    }


    return 0;
}