/*
Aluno: Guilherme Candida de Amorim
Exercicio: 01
Descricao: Pseudocodigo para lavar um carro e tres sub-rotinas.
Data: 09/09/2026
*/

/*
PSEUDOCODIGO

INICIO
    separar os materiais
    molhar o carro
    lavar o carro
    enxaguar o carro
    secar o carro
FIM

Sub-rotinas:
1. molharCarro()
2. lavarCarro()
3. secarCarro()
*/

#include <stdio.h>

void molharCarro() {
    printf("Molhando o carro...\n");
}

void lavarCarro() {
    printf("Lavando o carro...\n");
}

void secarCarro() {
    printf("Secando o carro...\n");
}

int main() {
    molharCarro();
    lavarCarro();

    printf("Enxaguando o carro...\n");

    secarCarro();

    return 0;
}
