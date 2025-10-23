#include <stdio.h>
#include <stdlib.h>

unsigned int M(unsigned int m,unsigned int n);
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

unsigned int M(int V[]) {
    
    if( V[0] == 0) return 0
    else if (V[1] =)
    {
        /* code */
    }
    

    ADDS += 2; //Soma 2 adições

    
}