/*
Aluno: Guilherme Candida de Amorim
Exercicio: 47
Descricao: Calcula o novo salario conforme a faixa de aumento.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float salario;
    float novoSalario;

    printf("Salario atual: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        novoSalario = salario * 1.20;
    } else if (salario <= 2000) {
        novoSalario = salario * 1.10;
    } else {
        novoSalario = salario * 1.05;
    }

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
