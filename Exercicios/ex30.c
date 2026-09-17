/*
Aluno: Guilherme Candida de Amorim
Exercicio: 30
Descricao: Calcula a divisao real de dois numeros inteiros.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    int a;
    int b;
    float resultado;

    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Nao e possivel dividir por zero.\n");
        return 0;
    }

    resultado = (float) a / b;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
