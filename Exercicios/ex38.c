/*
Aluno: Guilherme Candida de Amorim
Exercicio: 38
Descricao: Usa operador ternario para verificar a maioridade.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("%s\n", idade >= 18 ? "Maior de idade" : "Menor de idade");

    return 0;
}
