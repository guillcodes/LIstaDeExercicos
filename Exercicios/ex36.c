/*
Aluno: Guilherme Candida de Amorim
Exercicio: 36
Descricao: Le dados de um aluno e calcula sua media.
Data: 17/09/2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);

    return 0;
}
