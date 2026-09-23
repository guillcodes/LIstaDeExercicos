/*
Aluno: Guilherme Candida de Amorim
Exercicio: 27
Descricao: Le e mostra valores de tipos diferentes.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    int inteiro;
    double decimal;
    char caractere;
    char texto[50];

    printf("Numero inteiro: ");
    scanf("%d", &inteiro);

    printf("Numero decimal: ");
    scanf("%lf", &decimal);

    printf("Caractere: ");
    scanf(" %c", &caractere);

    printf("Texto: ");
    scanf(" %49[^\n]", texto);

    printf("\nValores digitados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %.2f\n", decimal);
    printf("Caractere: %c\n", caractere);
    printf("Texto: %s\n", texto);

    return 0;
}