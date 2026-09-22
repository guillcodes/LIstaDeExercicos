/*
Aluno: Guilherme Candida de Amorim
Exercicio: 48
Descricao: Calcula as raizes de uma equacao do segundo grau.
Data: 09/09/2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Valor de a: ");
    scanf("%f", &a);

    printf("Valor de b: ");
    scanf("%f", &b);

    printf("Valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e uma equacao do segundo grau.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);

        printf("Uma raiz real: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
