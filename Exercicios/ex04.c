/*
Aluno: Guilherme Candida de Amorim
Exercicio: 04
Descricao: Simula uma fila de banco chamando as senhas.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int quantidade;

    printf("Pessoas na fila: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Senha %d\n", i);
    }

    return 0;
}
