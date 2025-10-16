#include <stdio.h>

// Função que faz a permutação circular
void Permute(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x, y, z;

    printf("Introduza três números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nAntes da permutação:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    Permute(&x, &y, &z);

    printf("\nDepois da permutação circular:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
