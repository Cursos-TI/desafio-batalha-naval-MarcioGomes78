#include <stdio.h>

#define SIZE 10

void exibirTabuleiro(int tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidade(int tabuleiro[SIZE][SIZE], int habilidade[5][5], int origemLinha, int origemColuna) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = origemLinha - 2 + i; // Ajusta a linha para o tabuleiro
            int coluna = origemColuna - 2 + j; // Ajusta a coluna para o tabuleiro
            if (habilidade[i][j] == 1 && linha >= 0 && linha < SIZE && coluna >= 0 && coluna < SIZE) {
                tabuleiro[linha][coluna] = 5; // Marca a área afetada
            }
        }
    }
}

int main() {
    int tabuleiro[SIZE][SIZE] = {0}; // Inicializa o tabuleiro com água (0)

    // Matriz de habilidade em cone
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Matriz de habilidade em cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Matriz de habilidade em octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Aplicar habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 2, 2); // Cone no centro (2, 2)
    aplicarHabilidade(tabuleiro, cruz, 5, 5); // Cruz no centro (5, 5)
    aplicarHabilidade(tabuleiro, octaedro, 7, 7); // Octaedro no centro (7, 7)

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int i, j = 0;

    printf("\n");
    printf("########## TABULEIRO BATALHA NAVAL AGUA ##########\n\n");

    // Imprime as colunas.
    for (int i = 0; i < 10; i++)
    {
        printf("  %c ", colunas[i]);
    }

    printf("\n");

    // Tabuleiro 10X10
    for (int i = 0; i < 10; i++)
    {
        // Imprime as linhas.
        int linhas[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        printf("%d", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d  ", tabuleiro[i][j]);
        }

        printf(" \n");
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == j)
        {
            printf(" ", tabuleiro[0][0] = 3, tabuleiro[1][1] = 3, tabuleiro[2][2] = 3);
        }
    }

    if (i + j - 1)
    {
        printf(" ", tabuleiro[0][9] = 3, tabuleiro[1][8] = 3, tabuleiro[2][7] = 3);
    }

    // Navio horizontal
    tabuleiro[4][1] = 3;
    tabuleiro[4][2] = 3;
    tabuleiro[4][3] = 3;

    // Navio vertical
    tabuleiro[4][9] = 3;
    tabuleiro[5][9] = 3;
    tabuleiro[6][9] = 3;
    printf("\n");

    printf("########## TABULEIRO BATALHA NAVAL COMPLETO ##########\n\n");

    // Imprime as colunas.
    for (int i = 0; i < 10; i++)
    {
        printf("  %c ", colunas[i]);
    }

    printf("\n");
    // CRIA O TABULEIRO 10 X 10
    for (int i = 0; i < 10; i++)
    {
        // Imprime as linhas.
        int linhas[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        printf("%d", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}