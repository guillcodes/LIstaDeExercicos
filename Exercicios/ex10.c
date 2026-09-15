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


Decomposicao:
1. Ler o valor do troco.
2. Calcular quantas moedas de 25 cabem.
3. Calcular o valor que sobrou.
4. Repetir o processo com moedas de 10 e 5.
5. O valor restante sera pago com moedas de 1.

Estrategia gulosa:
Sempre escolhemos primeiro a moeda de maior valor.
Assim buscamos usar a menor quantidade de moedas.
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
