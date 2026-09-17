/*
Aluno: Guilherme Candida de Amorim
Exercicio: 35
Descricao: Mostra o tamanho em bytes de varios tipos.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));
    printf("ponteiro para int: %zu bytes\n", sizeof(int *));

    return 0;
}
