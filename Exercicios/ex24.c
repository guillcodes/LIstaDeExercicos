/*
Aluno: Guilherme Candida de Amorim
Exercicio: 24
Descricao: Verifica se um numero e par ou impar com comentarios.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    int numero;

    // Le o numero digitado pelo usuario
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o resto da divisao por 2 e zero
    if (numero % 2 == 0) {
        printf("par\n");
    } else {
        printf("impar\n");
    }

    return 0;
}
