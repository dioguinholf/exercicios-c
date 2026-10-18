#include <stdio.h>

int main(void) {
    float altura, peso;
    char classificacao;

    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    if (altura < 1.20f) {
        if (peso <= 60)       classificacao = 'A';
        else if (peso <= 90)  classificacao = 'D';
        else                  classificacao = 'G';
    }
    else if (altura <= 1.70f) {
        if (peso <= 60)       classificacao = 'B';
        else if (peso <= 90)  classificacao = 'E';
        else                  classificacao = 'H';
    }
    else {
        if (peso <= 60)       classificacao = 'C';
        else if (peso <= 90)  classificacao = 'F';
        else                  classificacao = 'I';
    }

    printf("Classificacao: %c\n", classificacao);
    return 0;
}