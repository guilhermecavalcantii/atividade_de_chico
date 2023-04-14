#include <stdio.h>

// Verifica se � poss�vel vencer na pr�xima jogada em uma linha, coluna ou diagonal
int vencer_proxima_jogada(int a, int b, int c, int peca) {
    if (a == peca && b == peca && c == 0) {
        return 1;
    }
    if (a == peca && c == peca && b == 0) {
        return 1;
    }
    if (b == peca && c == peca && a == 0) {
        return 1;
    }
    return 0;
}

// Determina a pr�xima jogada em um jogo da velha
void determinar_proxima_jogada(int tabuleiro[3][3]) {

    int i, j;

    // Verifica se � poss�vel vencer na pr�xima jogada em uma linha
    for (i = 0; i < 3; i++) {
        if (vencer_proxima_jogada(tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2], -1)) {
            for (j = 0; j < 3; j++) {
                if (tabuleiro[i][j] == 0) {
                    tabuleiro[i][j] = -1;
                    return;
                }
            }
        }
        if (vencer_proxima_jogada(tabuleiro[0][i], tabuleiro[1][i], tabuleiro[2][i], -1)) {
            for (j = 0; j < 3; j++) {
                if (tabuleiro[j][i] == 0) {
                    tabuleiro[j][i] = -1;
                    return;
                }
            }
        }
    }

    // Verifica se � poss�vel vencer na pr�xima jogada em uma diagonal
    if (vencer_proxima_jogada(tabuleiro[0][0], tabuleiro[1][1], tabuleiro[2][2], -1)) {
        if (tabuleiro[0][0] == 0) {
            tabuleiro[0][0] = -1;
            return;
        }
        if (tabuleiro[1][1] == 0) {
            tabuleiro[1][1] = -1;
            return;
        }
        if (tabuleiro[2][2] == 0) {
            tabuleiro[2][2] = -1;
            return;
        }
    }
    if (vencer_proxima_jogada(tabuleiro[0][2], tabuleiro[1][1], tabuleiro[2][0], -1)) {
        if (tabuleiro[0][2] == 0) {
            tabuleiro[0][2] = -1;
            return;
        }
        if (tabuleiro[1][1] == 0) {
            tabuleiro[1][1] = -1;
            return;
        }
        if (tabuleiro[2][0] == 0) {
            tabuleiro[2][0] = -1;
            return;
        }
    }
}


