/*
Aluno: Guilherme Candida de Amorim
Exercicio: 43
Descricao: Faz uma operacao matematica usando switch-case.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float a;
    float b;
    char operacao;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Primeiro numero: ");
    scanf("%f", &a);

    printf("Segundo numero: ");
    scanf("%f", &b);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;

        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;

        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                printf("Resultado: %.2f\n", a / b);
            }
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
