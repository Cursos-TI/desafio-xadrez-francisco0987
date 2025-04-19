#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez: Torre, Bispo e Rainha
 * Cada peça usa uma estrutura de repetição diferente:
 * - Torre: for
 * - Bispo: while
 * - Rainha: do-while
 */

int main() {
    // Movimento da TORRE - 5 casas para a direita (usando for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (usando while)
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda (usando do-while)
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
