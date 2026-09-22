/*
Aluno: Guilherme Candida de Amorim
Exercicio: 56
Descricao: Simula um sistema simples de login.
Data: 09/09/2026
*/

#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    printf("Usuario: ");
    scanf("%19s", usuario);

    printf("Senha: ");
    scanf("%19s", senha);

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso concedido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
