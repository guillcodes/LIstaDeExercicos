/*
Aluno: Guilherme Candida de Amorim
Exercicio: 33
Descricao: Calcula a media de quatro notas.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Media: %.2f\n", media);

    return 0;
}
