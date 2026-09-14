/*
Aluno: Guilherme Candida de Amorim
Exercicio: 19
Descricao: Verifica se uma data e valida considerando anos bissextos.
Data: 14/09/2026
*/

#include <stdio.h>

int main() {
    int dia;
    int mes;
    int ano;
    int diasNoMes;
    int bissexto;

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mes: ");
    scanf("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);

    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    if (mes < 1 || mes > 12) {
        printf("Data invalida.\n");
        return 0;
    }

    if (mes == 2) {
        if (bissexto) {
            diasNoMes = 29;
        } else {
            diasNoMes = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30;
    } else {
        diasNoMes = 31;
    }

    if (dia >= 1 && dia <= diasNoMes) {
        printf("Data valida.\n");
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}
