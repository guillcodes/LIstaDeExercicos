/*
Aluno: Guilherme Candida de Amorim
Exercicio: 39
Descricao: Calcula uma expressao respeitando a precedencia dos operadores.
Data: 09/09/2026
*/

/*
Calculo:

10 + 5 * 2 / 3 - 1

5 * 2 = 10
10 / 3 = 3
10 + 3 - 1 = 12

Resultado: 12
*/

#include <stdio.h>

int main() {
    int x;

    x = 10 + 5 * 2 / 3 - 1;

    printf("Resultado: %d\n", x);

    return 0;
}
