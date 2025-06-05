#include <stdio.h>

// Função recursiva para movimento da Torre: anda 'casas' para a direita
void movimentoTorre(int casas) {
    if (casas == 0) return;           // condição base da recursão
    printf("Direita\n");              // imprime movimento para a direita
    movimentoTorre(casas - 1);        // chama recursivamente com casas - 1
}

// Função recursiva para movimento da Rainha: anda 'casas' para a esquerda
void movimentoRainha(int casas) {
    if (casas == 0) return;           // condição base da recursão
    printf("Esquerda\n");             // imprime movimento para a esquerda
    movimentoRainha(casas - 1);       // chama recursivamente com casas - 1
}

// Função recursiva para o Bispo: para cada passo vertical, anda 1 passo horizontal
void movimentoBispo(int casasVerticais) {
    if (casasVerticais == 0) return;  // condição base da recursão
    for (int i = 0; i < 1; i++) {     // loop interno para movimento horizontal
        printf("Direita\n");
    }
    printf("Cima\n");                 // movimento vertical
    movimentoBispo(casasVerticais - 1); // chamada recursiva para próxima casa vertical
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int passosParaCima = 2;       // Cavalo: 2 passos para cima
    int passosParaDireita = 1;    // Cavalo: 1 passo para direita

    // Movimento da Torre
    movimentoTorre(casasTorre);
    printf("\n");

    // Movimento do Bispo
    movimentoBispo(casasBispo);
    printf("\n");

    // Movimento da Rainha
    movimentoRainha(casasRainha);
    printf("\n");

    // Movimento do Cavalo: loops aninhados com controle por continue/break
    int totalMovimentos = 0;

    for (;;) {  // loop infinito, será interrompido internamente
        int passosCimaFeitos = 0;

        // Movimenta para cima 2 vezes
        while (passosCimaFeitos < passosParaCima) {
            printf("Cima\n");
            passosCimaFeitos++;
            totalMovimentos++;
            if (totalMovimentos >= passosParaCima + passosParaDireita) break;
        }

        if (totalMovimentos >= passosParaCima + passosParaDireita) break;

        // Movimenta para direita 1 vez
        printf("Direita\n");
        totalMovimentos++;
        if (totalMovimentos >= passosParaCima + passosParaDireita) break;
    }

    return 0;
}