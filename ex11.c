/*
Aluno: Guilherme Candida de Amorim
Exercicio: 11
Descricao: Converte um valor em reais para dolares.
Data: 09/09/2026
*/

/*
PSEUDOCODIGO

INICIO
    LEIA valorReais
    LEIA taxaCambio

    valorDolares = valorReais / taxaCambio

    ESCREVA valorDolares
FIM
*/

#include <stdio.h>

int main() {
    float reais;
    float taxa;
    float dolares;

    printf("Valor em reais: ");
    scanf("%f", &reais);

    printf("Taxa de cambio: ");
    scanf("%f", &taxa);

    if (taxa == 0) {
        printf("Taxa invalida.\n");
        return 0;
    }

    dolares = reais / taxa;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}
