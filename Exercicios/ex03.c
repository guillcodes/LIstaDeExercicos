/*
Aluno: Guilherme Candida de Amorim
Exercicio: 03
Descricao: Decomposicao da organizacao de uma biblioteca.
Data: 09/09/2026
*/

/*
Decomposicao:

1. Separar os livros.
2. Ler o titulo.
3. Ler o autor.
4. Identificar a categoria.
5. Registrar o livro.
6. Guardar no local correto.
7. Repetir ate terminar todos os livros.

A repeticao pode ser usada para repetir o cadastro
de cada livro automaticamente.
*/

#include <stdio.h>

int main() {
    int quantidade;

    printf("Quantos livros serao cadastrados? ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Cadastrando livro %d\n", i);
    }

    return 0;
}
