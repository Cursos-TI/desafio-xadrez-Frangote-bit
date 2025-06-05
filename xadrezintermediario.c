#include <stdio.h>

int main() {
    // Número de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int passosParaBaixo = 2;
    int passosParaEsquerda = 1;

    // Movimento da TORRE (linha reta) usando FOR
    // A Torre vai andar 5 casas para a direita
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Separando os movimentos anteriores
    printf("\n");

    // Movimento do BISPO (diagonal) usando WHILE
    // O Bispo vai andar 5 casas na diagonal para cima e à direita
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Separando os movimentos anteriores
    printf("\n");

    // Movimento da RAINHA (horizontal) usando DO-WHILE
    // A Rainha vai andar 8 casas para a esquerda
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Separando os movimentos anteriores
    printf("\n");

    // Movimento do CAVALO (em "L") com loops aninhados
    for (int i = 0; i < 1; i++) { // Cavalo faz 1 movimento em L
        // Loop interno com WHILE (para 2 casas para baixo)
        int j = 0;
        while (j < passosParaBaixo) {
            printf("Baixo\n");
            j++;
        }

        // Depois do movimento para baixo, 1 movimento para a esquerda
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < passosParaEsquerda);
    }

    return 0;
}