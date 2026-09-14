/*
Aluno: Guilherme Candida de Amorim
Exercicio: 18
Descricao: Verifica se um numero esta no intervalo de 10 a 20.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 20) {
        printf("O numero esta no intervalo [10, 20].\n");
    } else {
        printf("O numero esta fora do intervalo.\n");
    }

    return 0;
}
