/*
Aluno: Guilherme Candida de Amorim
Exercicio: 37
Descricao: Calcula x usando a formula informada no enunciado.
Data: 17/09/2026
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;
    float delta;
    float x;

    printf("Valor de a: ");
    scanf("%f", &a);

    printf("Valor de b: ");
    scanf("%f", &b);

    printf("Valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O valor de a nao pode ser zero.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe resultado real.\n");
        return 0;
    }

    x = (-b + sqrt(delta)) / (2 * a);

    printf("x = %.2f\n", x);

    return 0;
}
