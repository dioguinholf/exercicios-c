#include <stdio.h>

int main(void) {
    int num1, num2, soma;                   // declaracao de variaveis

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);                     // le o primeiro numero

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);                     // le o segundo numero

    soma = num1 + num2;                     // realiza a soma

    printf("A soma de %d e %d e: %d\n", num1, num2, soma);
    return 0;
}