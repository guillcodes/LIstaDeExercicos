/*
Aluno: Guilherme Candida de Amorim
Exercicio: 17
Descricao: Calcula o salario liquido com desconto de 10 por cento.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    float salarioBruto;
    float desconto;
    float salarioLiquido;

    printf("Salario bruto: ");
    scanf("%f", &salarioBruto);

    desconto = salarioBruto * 0.10;
    salarioLiquido = salarioBruto - desconto;

    printf("Desconto do INSS: R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
