#include <stdio.h>

int main(void) {
    int n, i, valor, j;
    unsigned long long fatorial;

    do {
        printf("Quantos valores deseja ler? ");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        do {
            printf("Valor %d (inteiro positivo, ate 20): ", i);
            scanf("%d", &valor);
        } while (valor <= 0 || valor > 20);

        fatorial = 1;
        for (j = 2; j <= valor; j++) {
            fatorial = fatorial * j;
        }

        printf("%5d | %llu\n", valor, fatorial);
    }
    return 0;
}