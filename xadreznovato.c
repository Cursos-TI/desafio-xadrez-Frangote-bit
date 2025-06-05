#include <stdio.h>

int main() {
    // Número de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da TORRE (linha reta) usando FOR
    // A Torre vai andar 5 casas para a direita
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO (diagonal) usando WHILE
    // O Bispo vai andar 5 casas na diagonal para cima e à direita
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da RAINHA (horizontal) usando DO-WHILE
    // A Rainha vai andar 8 casas para a esquerda
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}