/*
Aluno: Guilherme Candida de Amorim
Exercicio: 02
Descricao: Exibe os primeiros N termos da sequencia de Fibonacci.
Data: 09/09/2026
*/

#include <stdio.h>

int main() {
    int n;
    int primeiro = 1;
    int segundo = 1;
    int proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            proximo = primeiro + segundo;
            printf("%d ", proximo);

            primeiro = segundo;
            segundo = proximo;
        }
    }

    printf("\n");

    return 0;
}
