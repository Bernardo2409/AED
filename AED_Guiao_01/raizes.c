#include <stdio.h>
#include <math.h>

int main (void) {


    

    int n;
    int i;


    printf(" Quantas linhas tem a tabelas?");
    scanf(" %d", &n);

    printf(" Raízes Quadradas ----- Potências de Base 2\n");

    for ( i = 1; i <= n; i++) {
        
        printf (" %d -------- %.0f ---- %.0f \n" ,i, pow(i,2), sqrt(i));

    };


}