/*
Aluno: Guilherme Candida de Amorim
Exercicio: 08
Descricao: Jogo de adivinhacao com dicas de maior ou menor.
Data: 09/09/2026
*/

/*
Estrutura de repeticao:
O do/while repete os palpites enquanto o usuario nao acertar.

Estrutura de decisao:
O if/else verifica se o palpite e menor, maior
ou igual ao numero sorteado.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;
    int palpite;

    srand((unsigned) time(NULL));
    numero = rand() % 100 + 1;

    do {
        printf("Digite um numero de 1 a 100: ");
        scanf("%d", &palpite);

        if (palpite < numero) {
            printf("O numero e maior.\n");
        } else if (palpite > numero) {
            printf("O numero e menor.\n");
        } else {
            printf("Voce acertou!\n");
        }

    } while (palpite != numero);

    return 0;
}
