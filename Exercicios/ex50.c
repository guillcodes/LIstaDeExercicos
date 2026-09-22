/*
Aluno: Guilherme Candida de Amorim
Exercicio: 50
Descricao: Calcula o IMC e mostra a classificacao.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    float peso;
    float altura;
    float imc;

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida.\n");
        return 0;
    }

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
