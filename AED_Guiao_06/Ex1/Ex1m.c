#include <stdio.h>
#include <stdlib.h>

unsigned int D(unsigned int m,unsigned int n);
void initializeCache(void);

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

    // Initialize the cache before using it
    initializeCache();

    printf("%10s%20s%20s\n", "n", "res", "ADDS");

    for (int i = 0; i <= n; i++) {
        
        ADDS = 0; // Reset counter for each calculation
        int funcao = D(i,i);

        printf("%10d%20d%20ld\n", i, funcao , ADDS);
    }

    return 0;
}

//Memoization


#define SIZE 100
unsigned int D_Cache[SIZE][SIZE];
void initializeCache (void) {
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++)
        {
            D_Cache[i][j] = -1;
            
        }

    }
}

unsigned int D(unsigned int m,unsigned int n) {

    if(D_Cache[m][n] != (unsigned int)-1) 
        return D_Cache[m][n];


    if(m == 0 || n == 0) {

       D_Cache[m][n] = 1;
    } else {
        
        ADDS += 2;
        
        D_Cache[m][n]= D(m-1, n) + D(m-1, n-1) + D(m, n-1);

    }

    
    return D_Cache[m][n];
    
}