/*
Aluno: Guilherme Candida de Amorim
Exercicio: 40
Descricao: Demonstra operadores bit a bit.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\nOperadores bit a bit:\n");

    printf("A & B = %d\n", a & b);
    printf("A | B = %d\n", a | b);
    printf("A ^ B = %d\n", a ^ b);
    printf("~A = %d\n", ~a);

    printf("\nDeslocamentos:\n");

    printf("Dobro de A: %d\n", a << 1);
    printf("Metade de A: %d\n", a >> 1);

    return 0;
}