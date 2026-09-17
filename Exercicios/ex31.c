/*
Aluno: Guilherme Candida de Amorim
Exercicio: 31
Descricao: Le o nome completo com fgets e mostra uma saudacao.
Data: 17/09/2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Ola, %s!\n", nome);

    return 0;
}
