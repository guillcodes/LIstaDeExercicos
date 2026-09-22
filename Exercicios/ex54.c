/*
Aluno: Guilherme Candida de Amorim
Exercicio: 54
Descricao: Compara duas strings usando strcmp.
Data: 09/09/2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100];
    char texto2[100];

    printf("Primeira string: ");
    fgets(texto1, sizeof(texto1), stdin);

    printf("Segunda string: ");
    fgets(texto2, sizeof(texto2), stdin);

    texto1[strcspn(texto1, "\n")] = '\0';
    texto2[strcspn(texto2, "\n")] = '\0';

    if (strcmp(texto1, texto2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
