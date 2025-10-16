. Considere o programa em Java listado de seguida, que apresenta um simples exemplo de utilização 
de arrays. 
 
Usando a linguagem C, desenvolva um programa equivalente com o mesmo tipo de funções. 
 
 
 
sizeof(void *) ...... 4 
sizeof(void) ........ 1 
sizeof(char) ........ 1 
sizeof(short) ....... 2 
sizeof(int) ......... 4 
sizeof(long) ........ 4 
sizeof(long long) ... 8 
sizeof(float) ....... 4 
sizeof(double) ...... 8 
 
/* 
Crie um programa em C equivalente a este em Java. 
*/ 
 
public class ProgA { 
     
    public static void main(String[] args) { 
        int[] a = {31,28,31,30,31,30,31,31,30,31,30,31}; 
        printArray("a", a); 
 
        int[] b = new int[12]; 
        cumSum(a, b); 
        printArray("b", b); 
    } 
 
 
   
#include <stdio.h>

void printArray(const char *s, int a[], int n);
void cumSum(int a[], int b[], int n);

int main (void) {



    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12];


    printArray("a", a, 12);
    cumSum(a, b, 12);
    printArray("b", b, 12);


}

void printArray (const char *s, int a[], int n) {
    printf(" %s :", s);
    for(int i = 0; i < n; i++) {

        printf("%d  ", a[i] );
    }

    printf("\n");

   
}

void cumSum ( int a[], int b[], int n) {
    int c = 0;
    for ( int i = 0; i< n ; i++) {
        c += a[i];
        b[i] = c;
    }

}