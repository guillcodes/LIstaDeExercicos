/*
Aluno: Guilherme Candida de Amorim
Exercicio: 16
Descricao: Verifica aprovacao pela nota e frequencia.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    float nota;
    float frequencia;

    printf("Nota: ");
    scanf("%f", &nota);

    printf("Frequencia: ");
    scanf("%f", &frequencia);

    if (nota >= 7 && frequencia >= 75) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
