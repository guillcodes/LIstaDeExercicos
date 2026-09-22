/*
Aluno: Guilherme Candida de Amorim
Exercicio: 40
Descricao: Usa operadores bit a bit para dobrar e dividir por dois.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Dobro: %d\n", numero << 1);
    printf("Metade: %d\n", numero >> 1);

    return 0;
}
