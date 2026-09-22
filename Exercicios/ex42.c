/*
Aluno: Guilherme Candida de Amorim
Exercicio: 42
Descricao: Calcula o primeiro digito verificador de um CPF.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    char cpf[10];
    int soma = 0;
    int resto;
    int digito;

    printf("Digite os 9 primeiros digitos do CPF: ");
    scanf("%9s", cpf);

    for (int i = 0; i < 9; i++) {
        int numero = cpf[i] - '0';
        int peso = 10 - i;

        soma = soma + numero * peso;
    }

    resto = soma % 11;

    if (resto < 2) {
        digito = 0;
    } else {
        digito = 11 - resto;
    }

    printf("Primeiro digito verificador: %d\n", digito);

    return 0;
}
