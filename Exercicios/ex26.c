/*
Aluno: Guilherme Candida de Amorim
Exercicio: 26
Descricao: Mostra a importancia de nomes significativos.
Data: 17/09/2026
*/

/*
Nomes significativos deixam o codigo mais facil de entender.

Exemplo ruim:
int a, b, c;

Exemplo melhor:
int nota1, nota2, media;
*/

#include <stdio.h>

int main() {
    int nota1 = 8;
    int nota2 = 7;
    int media;

    media = (nota1 + nota2) / 2;

    printf("Media: %d\n", media);

    return 0;
}
