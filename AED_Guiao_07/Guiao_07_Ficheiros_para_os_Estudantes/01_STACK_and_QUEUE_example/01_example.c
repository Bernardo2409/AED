//
// TO DO : desenvolva um algoritmo para verificar se um numero inteiro positivo
//         e uma capicua
//         Exemplos: 12321 e uma capiacua, mas 123456 nao e
//         USE uma PILHA DE INTEIROS (STACK) e uma FILA DE INTEIROS (QUEUE)
//
// TO DO : design an algorithm to check if the digits of a positive decimal
//         integer number constitue a palindrome
//         Examples: 12321 is a palindrome, but 123456 is not
//         USE a STACK of integers and a QUEUE of integers
//

#include <stdio.h>

#include "IntegersQueue.h"
#include "IntegersStack.h"

int main(void) { 
    
    unsigned int n;
    printf("Insere um numero");
    scanf("%d", &n);

    unsigned int original = n;

    Stack* s = StackCreate(20);
    Queue* q = QueueCreate(20);

    //Guarda na Stack e na Queue
    
    while (n != 0) {
        int d = n % 10;
        StackPush(s, d);
        QueueEnqueue(q, d);
        n /= 10;
    }

    // Compara
    int is_palindrome = 1;
    while (!StackIsEmpty(s)) {
        if (StackPop(s) != QueueDequeue(q)) {
            is_palindrome = 0;
            break;
        }
    }

    // Verificar
    if (is_palindrome) {
        printf("%d é uma capicua.\n", original);
    } else {
        printf("%d não é uma capicua.\n", original);
    }

    //Destroir estruturas

    Stack ** adrPilha = &s;
    StackDestroy(adrPilha);

    Queue ** adrFila = &q;
    QueueDestroy(adrFila);
    

    return 0;

}
