/*
Aluno: Guilherme Candida de Amorim
Exercicio: 53
Descricao: Verifica se um ano e bissexto.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto.\n");
    } else {
        printf("Ano nao bissexto.\n");
    }

    return 0;
}
