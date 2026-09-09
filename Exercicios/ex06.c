/*
Aluno: Guilherme Candida de Amorim
Exercicio: 06
Descricao: Calcula a soma de 1 ate N usando while e formula matematica.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int somaWhile = 0;
    int somaFormula;

    printf("Digite N: ");
    scanf("%d", &n);

    while (i <= n) {
        somaWhile = somaWhile + i;
        i++;
    }

    somaFormula = n * (n + 1) / 2;

    printf("Soma com while: %d\n", somaWhile);
    printf("Soma com formula: %d\n", somaFormula);

    printf("A formula e mais eficiente porque nao precisa repetir varias vezes.\n");

    return 0;
}
