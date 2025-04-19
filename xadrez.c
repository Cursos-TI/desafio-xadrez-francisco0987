#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez com recursividade e loops aninhados.
 *
 * - Torre: recursão (5 casas para a direita)
 * - Bispo: recursão com loops aninhados (5 casas na diagonal para cima e à direita)
 * - Rainha: recursão (8 casas para a esquerda)
 * - Cavalo: loops aninhados complexos (2 casas para cima, 1 para a direita)
 */

// --- Funções recursivas ---

// Movimento da Torre
void moverTorre(int casas) {
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


// Movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Movimento do Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0)
        return;

    // Simulando movimento diagonal com loops aninhados
    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(vertical - 1, horizontal - 1);
}

// --- Cavalo com loops complexos ---

// Movimento do Cavalo
void moverCavalo() {
    int movimentos = 1; // só 1 movimento em "L"
    int movimentosFeitos = 0;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 3; i++) {
        if (i != 0) continue;  // simula 1 ciclo útil, com múltiplas variáveis
        for (int j = 0; j < 3; j++) {
            if (j > 0) break; // interrompe o loop após um movimento
            // Simula "duas casas para cima"
            printf("Cima\n");
            printf("Cima\n");
            // E uma para a direita
            printf("Direita\n");
            movimentosFeitos++;
            if (movimentosFeitos == movimentos)
                break;
        }
    }
}

int main() {
    // Movimento da TORRE com recursão
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do BISPO com recursão e loops aninhados
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    // Movimento da RAINHA com recursão
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do CAVALO com loops complexos
    printf("\n");
    moverCavalo();

    return 0;
}
