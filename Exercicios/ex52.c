/*
Aluno: Guilherme Candida de Amorim
Exercicio: 52
Descricao: Ordena tres numeros em ordem crescente sem usar array.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float auxiliar;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b) {
        auxiliar = a;
        a = b;
        b = auxiliar;
    }

    if (a > c) {
        auxiliar = a;
        a = c;
        c = auxiliar;
    }

    if (b > c) {
        auxiliar = b;
        b = c;
        c = auxiliar;
    }

    printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}
