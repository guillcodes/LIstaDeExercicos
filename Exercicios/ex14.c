/*
Aluno: Guilherme Candida de Amorim
Exercicio: 14
Descricao: Mostra operacoes logicas com duas variaveis booleanas.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Digite A (0 ou 1): ");
    scanf("%d", &a);

    printf("Digite B (0 ou 1): ");
    scanf("%d", &b);

    printf("A && B = %d\n", a && b);
    printf("A || B = %d\n", a || b);
    printf("!A = %d\n", !a);
    printf("A ^ B = %d\n", a ^ b);

    return 0;
}
