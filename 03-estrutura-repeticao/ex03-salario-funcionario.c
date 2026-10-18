#include <stdio.h>

#define ANO_ATUAL 2026

int main(void) {
    double salario = 1000.0;      // 1995: salario inicial
    double percentual = 1.5;      // 1996: 1,5%
    int ano;

    // 1996: primeiro aumento
    salario = salario + salario * percentual / 100;

    // 1997 em diante: o percentual dobra a cada ano
    for (ano = 1997; ano <= ANO_ATUAL; ano++) {
        percentual = percentual * 2;
        salario = salario + salario * percentual / 100;
    }

    printf("Salario em %d: R$ %.2f\n", ANO_ATUAL, salario);
    printf("Em notacao cientifica: R$ %.4e\n", salario);
    return 0;
}