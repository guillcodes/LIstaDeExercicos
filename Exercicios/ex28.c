/*
Aluno: Guilherme Candida de Amorim
Exercicio: 28
Descricao: Calcula area e perimetro de um circulo usando M_PI.
Data: 17/09/2026
*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    float raio;
    float area;
    float perimetro;

    printf("Raio: ");
    scanf("%f", &raio);

    area = M_PI * raio * raio;
    perimetro = 2 * M_PI * raio;

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
