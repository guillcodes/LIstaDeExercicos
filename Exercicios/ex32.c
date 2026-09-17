/*
Aluno: Guilherme Candida de Amorim
Exercicio: 32
Descricao: Troca os valores de duas variaveis usando ponteiros.
Data: 17/09/2026
*/

#include <stdio.h>

void trocarValores(int *a, int *b) {
    int auxiliar;

    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main() {
    int primeiro;
    int segundo;

    printf("Primeiro numero: ");
    scanf("%d", &primeiro);

    printf("Segundo numero: ");
    scanf("%d", &segundo);

    printf("Antes da troca: %d e %d\n", primeiro, segundo);

    trocarValores(&primeiro, &segundo);

    printf("Depois da troca: %d e %d\n", primeiro, segundo);

    return 0;
}
