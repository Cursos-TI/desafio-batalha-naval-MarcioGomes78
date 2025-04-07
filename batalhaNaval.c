#include <stdio.h>

int main()
{
    
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    printf("\n");
    printf("########## TABULEIRO BATALHA NAVAL AGUA ##########\n\n");

    // Imprime as colunas. 
    for (int i = 0; i < 10; i++)
    {
        printf("   %c ", colunas[i]);
    }

    printf("\n");
    
    

    // Tabuleiro com as posições dos navios
    for (int i = 0; i < 10; i++)
    {
        // Imprime as linhas.
        int linhas[10] = {1,2,3,4,5,6,7,8,9,10};
        printf("%2.2d", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d   ", tabuleiro[i][j]);
            
        }
        printf(" \n");
    }

    // Navio horizontal
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Navio vertical
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    printf("\n");

    printf("########## TABULEIRO BATALHA NAVAL COMPLETO ##########\n\n");

    // Imprime as colunas. 
    for (int i = 0; i < 10; i++)
    {
        printf("   %c ", colunas[i]);
    }

    printf("\n");
    // CRIA O TABULEIRO 10 X 10
    for (int i = 0; i < 10; i++)
    {   
        // Imprime as linhas.
        int linhas[10] = {1,2,3,4,5,6,7,8,9,10};
        printf("%2.2d", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d   ", tabuleiro[i][j]);
            
        }
        printf(" \n");
    }

    
    
    
    return 0;
}