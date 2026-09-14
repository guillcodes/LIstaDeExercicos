/*
Aluno: Guilherme Candida de Amorim
Exercicio: 22
Descricao: Corrige o erro do programa apresentado no enunciado.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int divisor = 2;

    if (divisor != 0) {
        printf("O resultado e %d\n", 10 / divisor);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}
