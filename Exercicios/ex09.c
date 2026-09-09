/*
Aluno: Guilherme Candida de Amorim
Exercicio: 09
Descricao: Desenha um quadrado de asteriscos usando uma funcao.
Data: 09/09/2026
*/

#include <stdio.h>

void desenhaQuadrado(int lado) {
    for (int linha = 0; linha < lado; linha++) {
        for (int coluna = 0; coluna < lado; coluna++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int lado;

    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    desenhaQuadrado(lado);

    return 0;
}
