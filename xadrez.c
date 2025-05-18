#include <stdio.h>

int main() {
     
    int bispo = 1, torre = 1, rainha = 1;

    printf("*Bispo\n");

    while (bispo <= 5) {
        printf("Cima - Direita\n");
        bispo++;
    }
        printf("\n");
        printf("*Torre\n");

    do {
        printf("Direita\n");
        torre++;
    } while (torre <= 5);

    printf("\n");
    printf("*Rainha\n");

    for(rainha; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }
    
    return 0;
}
