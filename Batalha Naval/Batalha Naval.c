#include <stdio.h>

// FUNÇÃO RESPONSÁVEL POR IMPRIMIR O TABULEIRO
int main ()
{
    int tabuleiro [10][10]; //MATRIZ RESPONBSÁVEL PELO TABULEIRO
    int linhas = 1; // IDENTIFICÇÃO DAS LINHAS
    char colunas [10], letras = 'A';

    //ATRIBUI O VALOR ZERO EM TODAS CASAS DO TABULEIRO
    for(int i = 0, j; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }        
    }

    //IMPRIME AS IDENTIFICAÇÕES DAS COLUNAS
    for(int x = 0; x < 10 ; x++)
    {   
        if(x == 0){ // TRATA A DIFERENÇA DA LINHA DE IDENTIFICAÇÃO DAS COLUNAS
            colunas [x] = letras;
            printf("   %c", colunas[x]);
            letras++;
        } else {
            colunas [x] = letras;
            printf("  %c", colunas[x]);
            letras++;
        }
    }

    printf("\n"); //PULAR LINHA APÓS IMPRIMIR COLUNAS


    //NAVIO 01
    for(int i = 0; i < 3; i++)
    {
    tabuleiro[2][i] = 3;
    }

    //NAVIO 02
    for(int i = 0; i < 3; i++)
    {
    tabuleiro[i][5] = 3;
    }

    //NAVIO 03
    for(int i = 0; i < 3; i++)
    {
    tabuleiro[4+i][4+i] = 3;
    }

    //NAVIO 04
    for(int i = 0; i < 3; i++)
    {
    tabuleiro[5+i][1+i] = 3;
    }


    //IMPRESSÃO DO TABULEIRO
    for(int i = 0, j; i < 10; i++)
    {   
        printf("%d", linhas); // IMPRIME A IDENTIFICAÇÃO DA LINHA
        
        //IMPRIME A LINHA
        for (j = 0; j < 10; j++)
        {   
            if (i == 9 && j == 0) //TRATA A DIFERENÇA DA LINHA 10
            {
                printf(" %d", tabuleiro[i][j]); 
            } else {
                printf("  %d", tabuleiro[i][j]);
            }
        }
        printf("\n"); //PULA UMA LINHA
        linhas++;       
    }

    return 0;
}
