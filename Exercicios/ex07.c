/*
Aluno: Guilherme Candida de Amorim
Exercicio: 07
Descricao: Simula as fases de um semaforo.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int ciclos;

    printf("Quantos ciclos deseja simular? ");
    scanf("%d", &ciclos);

    for (int i = 1; i <= ciclos; i++) {
        printf("\nCiclo %d\n", i);
        printf("Verde - 30 segundos\n");
        printf("Amarelo - 5 segundos\n");
        printf("Vermelho - 25 segundos\n");
    }

    return 0;
}
