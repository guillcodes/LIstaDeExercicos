/*
Aluno: Guilherme Candida de Amorim
Exercicio: 46
Descricao: Converte temperatura de Fahrenheit para Celsius.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
