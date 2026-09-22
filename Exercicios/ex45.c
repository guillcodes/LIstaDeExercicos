/*
Aluno: Guilherme Candida de Amorim
Exercicio: 45
Descricao: Calcula os valores finais de a, b e c.
Data: 09/09/2026
*/

/*
a = 5
b = 10

c = a++ + --b

a++ usa 5 e depois a passa para 6.
--b faz b passar para 9 antes de usar.

c = 5 + 9
c = 14

Valores finais:
a = 6
b = 9
c = 14
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c;

    c = a++ + --b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
