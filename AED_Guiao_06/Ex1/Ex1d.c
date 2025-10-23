#include <stdio.h>
#include <stdlib.h>

unsigned int D(unsigned int m,unsigned int n);
unsigned long ADDS = 0; //counter

int main(int argc, char *argv[]) {
    int n = 0;

    if (argc != 2) {

        printf("Usage: %s <N> \n", argv[0]);
        return 1;
    }
    else {

        n = atoi(argv[1]);
        if (n <= 0) {
            printf("N must be a positive integer \n");
            return 1;

        }

    }

    printf("%10s%20s%20s\n", "n", "res", "ADDS");

    for (int i = 0; i <= n; i++) {
        
        int funcao = D(i,i);

        printf("%10d%20d%20ld\n", i, funcao , ADDS);
        ADDS = 0;
    }

    return 0;
}

//Programacao dinâmica
unsigned int D(unsigned int m,unsigned int n) {
    unsigned int D[m+1] [n+1];

    for (unsigned int i = 0; i <= m; i++)
        D[i][0] = 1;
    for (unsigned int j = 0; j <= m; j++)
        D[0][j] = 1;
    
    for (unsigned int i = 1; i <= m; i++) {
        for (unsigned int j = 1; j <= m; j++) {
            ADDS += 2; //Soma 2 adições
            D[i][j] = D[i-1][j] + D[i-1][j-1] + D[i][j-1];

        }
    }
    


    return D[m][n];
    
}