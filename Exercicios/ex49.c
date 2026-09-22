/*
Aluno: Guilherme Candida de Amorim
Exercicio: 49
Descricao: Converte uma nota de 0 a 100 para conceito.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota invalida.\n");
    } else if (nota >= 90) {
        printf("Conceito A\n");
    } else if (nota >= 80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else if (nota >= 60) {
        printf("Conceito D\n");
    } else {
        printf("Conceito F\n");
    }

    return 0;
}
