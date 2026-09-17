/*
Aluno: Guilherme Candida de Amorim
Exercicio: 29
Descricao: Demonstra o escopo de variaveis locais.
Data: 17/09/2026
*/

#include <stdio.h>

void mostrarX() {
    int x = 10;

    printf("x da funcao: %d\n", x);
}

int main() {
    int x = 5;

    printf("x do main: %d\n", x);

    mostrarX();

    return 0;
}

/*
As duas variaveis possuem o mesmo nome,
mas estao em escopos diferentes.
Por isso uma nao altera a outra.
*/
