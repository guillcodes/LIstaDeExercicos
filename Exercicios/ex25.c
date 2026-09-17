/*
Aluno: Guilherme Candida de Amorim
Exercicio: 25
Descricao: Calcula o dobro de um numero.
Data: 17/09/2026
*/

/*
O programa le um numero e multiplica por 2.

Se o usuario digitar 10, a saida sera:
O dobro de 10 eh 20
*/

#include <stdio.h>

int main() {
    int numero;
    int dobro;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobro = numero * 2;

    printf("O dobro de %d eh %d\n", numero, dobro);

    return 0;
}
