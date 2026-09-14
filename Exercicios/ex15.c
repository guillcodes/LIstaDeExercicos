/*
Aluno: Guilherme Candida de Amorim
Exercicio: 15
Descricao: Verifica se um numero inteiro e par ou impar.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 0;
    }

    if (numero % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}
