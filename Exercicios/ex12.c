/*
Aluno: Guilherme Candida de Amorim
Exercicio: 12
Descricao: Calcula e classifica o IMC.
Data: 14/09/2026
*/

/*
PSEUDOCODIGO

INICIO
    LEIA peso
    LEIA altura

    imc = peso / (altura * altura)

    SE imc < 18.5
        ESCREVA "Abaixo do peso"
    SENAO SE imc < 25
        ESCREVA "Peso normal"
    SENAO SE imc < 30
        ESCREVA "Sobrepeso"
    SENAO
        ESCREVA "Obesidade"
FIM
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
