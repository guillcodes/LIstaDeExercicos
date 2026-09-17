/*
Aluno: Guilherme Candida de Amorim
Exercicio: 34
Descricao: Calcula a area de um circulo usando uma constante PI.
Data: 17/09/2026
*/

#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float raio;
    float area;

    printf("Raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area: %.2f\n", area);

    return 0;
}
