#include <stdio.h>

//FUNÇÃO DE MOVIMENTO DO BISPO
void bispo()
{
        //IMPRIME O MOVIMENTO DO BISCO 
        for(int i = 1, j = 1; i <= 5; i++)
        {
            printf("Cima\n");
            while(j == i)
            {
                printf("Direita\n");
                j++;
            }
        }                
}

//FUNÇÃO DE MOVIMENTO DA TORRE
void torre (int movimento)
{
    //SE A VARIAVEL FOR MAIOR QUE ZERO
    if(movimento > 0)
    {
        printf("Direita\n"); //IMPRIME OS MOVIMENTOS DA TORRE
        torre(movimento - 1); //DECREMENTA A VARIAVEL MOVIMENTO SE MOVIMENTO FOR MAIOR QUE ZERO
    }
}

//FUNÇÃO DE MOVIMENTO DA RAINHA
void rainha (int movimento)
{
    //SE A VARIAVEL FOR MAIOR QUE ZERO
    if(movimento > 0)
    {
        printf("Esquerda\n"); //IMPRIME O MOVIMENTO DA RAINHA
        rainha(movimento - 1); //DECREMENTA A VARIAVEL MOVIMENTO SE MOVIMENTO FOR MAIOR QUE ZERO
    }
}

//EXECUÇÃO DO PROGRAMA
int main ()
{
    int movimentoTorre = 5, movimentoRainha = 8; 

    printf("### BISPO ###\n"); //IMPRIME O TITULO DA PEÇA
    bispo(); //CHAMA A FUNÇÃO DE MOVIMENTO DO BISPO

    printf("\n### TORRE ###\n"); //IMPRIME O TITULO DA PEÇA
    torre(movimentoTorre); //CHAMA A FUNÇÃO DE MOVIMENTO DA TORRE

    printf("\n### RAINHA ###\n"); //IMPRIME O TITULO DA PEÇA
    rainha(movimentoRainha); //CHAMA A FUNÇÃO DE MOVIMENTO DA RAINHA

    printf("\n### CAVALO ###\n"); //IMPRIME O TITULO DA PEÇA

    //MOVIMENTAÇÃO DO CAVALO
    for(int movimentoCavalo = 1, j = 2; 
            movimentoCavalo <= j; 
            movimentoCavalo ++) 
    {   
        printf("Cima\n");//IMPRIME "Cima"

        // IMPRIME "Direita" SE A CONDIÇÃO FOR VERDADE E ENCERRA O LAÇO   
        if( movimentoCavalo == j)
        {
            printf("Direita\n"); 
            break; //ENCERRA O LAÇO         
        } 
    }
    return 0;
}

