/*
Aluno: Guilherme Candida de Amorim
Exercicio: 41
Descricao: Verifica se um caractere e uma letra minuscula.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (caractere >= 'a' && caractere <= 'z') {
        printf("E uma letra minuscula.\n");
    } else {
        printf("Nao e uma letra minuscula.\n");
    }

    return 0;
}
