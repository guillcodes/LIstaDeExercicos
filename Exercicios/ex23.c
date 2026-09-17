/*
Aluno: Guilherme Candida de Amorim
Exercicio: 23
Descricao: Mostra e explica o uso de pos-incremento e pre-incremento.
Data: 17/09/2026
*/

/*
Saida:

5
5
7

Explicacao:
a++ usa o valor atual e depois soma 1.
++a soma 1 primeiro e depois usa o valor.
*/

#include <stdio.h>

int main() {
    int a = 5;

    printf("%d\n", a);
    printf("%d\n", a++);
    printf("%d\n", ++a);

    return 0;
}
