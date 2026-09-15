/*
Aluno: Guilherme Candida de Amorim
Exercicio: 22
Descricao: Identificacao e correcao dos erros do codigo apresentado.
Data: 14/09/2026
*/

#include <stdio.h>

/*
Erro semantico:
O codigo original tenta calcular 10 / 0.
Nao e possivel realizar uma divisao por zero.

Erro de sintaxe:
No codigo exibido no enunciado nao ha um erro de sintaxe
visivel. A estrutura do programa esta escrita corretamente.

Correcao:
Trocar o divisor zero por um valor diferente de zero.
*/

int main() {
    printf("O resultado e %d\n", 10 / 2);

    return 0;
}