#include <stdio.h>

#define N 10  // tamanho máximo do tabuleiro
void exibirTabuleiro(int tabuleiro[N][N], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int tabuleiro5[5][5] = {0};

    printf("=== NÍVEL NOVATO ===\n");

    // Navio vertical (3 posições)
    for (int i = 0; i < 3; i++) {
        tabuleiro5[i][1] = 3;
        printf("Navio vertical -> (%d, %d)\n", i, 1);
    }

    // Navio horizontal (3 posições)
    for (int j = 0; j < 3; j++) {
        tabuleiro5[4][j] = 3;
        printf("Navio horizontal -> (%d, %d)\n", 4, j);
    }

    printf("\nTabuleiro 5x5:\n");
    exibirTabuleiro(tabuleiro5, 5);

    int tabuleiro10[10][10] = {0};

    printf("=== NÍVEL AVENTUREIRO ===\n");


    for (int i = 0; i < 4; i++) {
        tabuleiro10[i][2] = 3;
    }


    for (int j = 0; j < 5; j++) {
        tabuleiro10[7][j] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro10[i][i] = 3;
    }

    for (int i = 0; i < 4; i++) {
        tabuleiro10[i][9 - i] = 3;
    }

    printf("Tabuleiro 10x10:\n");
    exibirTabuleiro(tabuleiro10, 10);

    printf("=== NÍVEL MESTRE ===\n");

    printf("Cone:\n");
    int cone[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Cruz:\n");
    int cruz[3][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Octaedro:\n");
    int oct[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", oct[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
