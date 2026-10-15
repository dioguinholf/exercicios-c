#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];                         // vetor de caracteres guarda o texto

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);       // fgets le a linha inteira, com espacos
    nome[strcspn(nome, "\n")] = '\0';       // remove o \n que o fgets deixa no fim

    printf("Seu nome e: %s\n", nome);
    return 0;
}