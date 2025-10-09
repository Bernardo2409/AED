#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Função para converter graus em radianos
double graus_para_rad(double graus) {
    return graus * (PI / 180.0);
}

int main() {
    double ang_min, ang_max, passo;
    FILE *f;

    // Pedir dados ao utilizador
    printf("Indique o ângulo mínimo (graus): ");
    scanf("%lf", &ang_min);

    printf("Indique o ângulo máximo (graus): ");
    scanf("%lf", &ang_max);

    printf("Indique o espaçamento (graus): ");
    scanf("%lf", &passo);

    // Abrir ficheiro para escrita
    f = fopen("tabela.txt", "w");
    if (f == NULL) {
        printf("Erro a abrir o ficheiro.\n");
        return 1;
    }

    // Cabeçalho da tabela
    printf("%-6s %-12s %-12s\n", "ang", "sin(ang)", "cos(ang)");
    fprintf(f, "%-6s %-12s %-12s\n", "ang", "sin(ang)", "cos(ang)");

    // Loop pelos valores do ângulo
    for (double ang = ang_min; ang <= ang_max; ang += passo) {
        double rad = graus_para_rad(ang);
        double s = sin(rad);
        double c = cos(rad);

        printf("%-6.0f %-12.6f %-12.6f\n", ang, s, c);
        fprintf(f, "%-6.0f %-12.6f %-12.6f\n", ang, s, c);
    }

    fclose(f);
    printf("Tabela guardada em tabela.txt\n");

    return 0;
}
