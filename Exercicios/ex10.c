/*
Aluno: Guilherme Candida de Amorim
Exercicio: 10
Descricao: Calcula o menor numero de moedas para um troco.
Data: 09/09/2026
*/

/*
Estrategia:
Sempre usar primeiro a moeda de maior valor.

Ordem:
25 centavos
10 centavos
5 centavos
1 centavo
*/

#include <stdio.h>

int main() {
    int valor;
    int moeda25;
    int moeda10;
    int moeda5;
    int moeda1;

    printf("Digite o troco em centavos: ");
    scanf("%d", &valor);

    moeda25 = valor / 25;
    valor = valor % 25;

    moeda10 = valor / 10;
    valor = valor % 10;

    moeda5 = valor / 5;
    valor = valor % 5;

    moeda1 = valor;

    printf("Moedas de 25: %d\n", moeda25);
    printf("Moedas de 10: %d\n", moeda10);
    printf("Moedas de 5: %d\n", moeda5);
    printf("Moedas de 1: %d\n", moeda1);

    return 0;
}
