#include <stdio.h>

int main (void) {
    int a, b, c, d, soma;                   // declaracao de variaveis

    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    soma = a + b + c + d;

    printf("A soma de %d, %d, %d e %d e: %d\n", a, b, c, d, soma);
    return 0;
}