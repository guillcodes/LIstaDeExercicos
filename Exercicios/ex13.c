/*
Aluno: Guilherme Candida de Amorim
Exercicio: 13
Descricao: Verifica se tres numeros estao em ordem crescente ou decrescente.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c) {
        printf("Ordem crescente.\n");
    } else if (a > b && b > c) {
        printf("Ordem decrescente.\n");
    } else {
        printf("Os numeros nao estao em ordem crescente nem decrescente.\n");
    }

    return 0;
}
