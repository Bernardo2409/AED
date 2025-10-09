#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {

    char s1[50];
    char s2[50];

    printf("Uma string \n");
    scanf("%s" , s1);
    
    printf("Outra String \n");
    scanf("%s", s2);

    //Conte os caracteres da primeira string que são letras do alfabeto.
    int i = 0;
    int counter = 0;
    for (i = 0; i < strlen(s1); i++) {

        if( isalpha(s1[i])) {
            counter++;
        }
    }
    printf("Number of alphabetic characters String 1: %d\n", counter);

    //Conte os caracteres da segunda string que são letras maiúsculas.
    i = 0;
    counter = 0;
    for ( i = 0; i < strlen(s2); i++) {

        if ( !islower(s2[i])) {
            counter++;
        }
    }
    printf("Number of uppercase characters String 2: %d\n", counter);

    //Converta todas as letras maiúsculas, das duas strings, para minúsculas.
    i = 0;
    for ( i = 0; i < strlen(s1); i++) {

        s1[i] =  tolower(s1[i]);
    }  

    int g = 0;
    for ( g = 0; g < strlen(s2); g++) {

        s2[g] = tolower(s2[g]);
    }
    printf( " String 1 em minúsculas: %s \n", s1);
    printf( " String 2 em minúsculas: %s \n", s2);


    //Compare as duas strings resultantes e escreva uma mensagem indicando que são iguais, ou
    // apresentando as duas strings na sua ordem lexicográfica.

    int cmp = strcmp(s1, s2);
    if (cmp == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
        if (cmp < 0) {
            printf("Ordem lexicográfica: %s, %s\n", s1, s2);
        } else {
            printf("Ordem lexicográfica: %s, %s\n", s2, s1);
        }
    }

    // Crie uma cópia da segunda string.
    char s2copy [50];


    
}