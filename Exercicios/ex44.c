/*
Aluno: Guilherme Candida de Amorim
Exercicio: 44
Descricao: Mostra o resultado de uma expressao logica.
Data: 09/09/2026
*/

/*
Expressao:

(5 > 3) && (2 == 2) || !(10 < 5)

Resultado: 1
*/

#include <stdio.h>

int main() {
    int resultado;

    resultado = ((5 > 3) && (2 == 2)) || !(10 < 5);

    printf("%d\n", resultado);

    return 0;
}
