#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[])
{

    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int i, j;

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