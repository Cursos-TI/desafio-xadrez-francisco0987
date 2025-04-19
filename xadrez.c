#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez: Torre, Bispo, Rainha e Cavalo
 *
 * - Torre: 5 casas para a direita (for)
 * - Bispo: 5 casas na diagonal para cima e à direita (while)
 * - Rainha: 8 casas para a esquerda (do-while)
 * - Cavalo: Movimento em "L" (2 casas para baixo, 1 casa para a esquerda),
 *           usando dois loops aninhados (for + while)
 */

int main() {
    // Movimento da TORRE - 5 casas para a direita (for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (while)
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda (do-while)
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Movimento do CAVALO - 2 casas para baixo, 1 para a esquerda (for + while)
    int movimentosCavalo = 1; // o cavalo faz 1 movimento em L
    printf("\nMovimento do Cavalo:\n");
    
    for (int i = 0; i < movimentosCavalo; i++) {
        int passosParaBaixo = 0;
        while (passosParaBaixo < 2) {
            printf("Baixo\n");
            passosParaBaixo++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
