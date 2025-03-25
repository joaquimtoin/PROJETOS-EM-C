#include <stdio.h>

int main(){
    
    //Declaração de variáveis de ambas cartas
    int pontos, pontos2, escolhaJogador, escolhaJogador2;
    unsigned int populacao, populacao2;
    float area, pib, area2, pib2, densidade, pibpc, densidade2, pibpc2, superpoder, superpoder2, primeiroAtributo, segundoAtributo, 
    primeiroAtributo2, segundoAtributo2, somaAtributos, somaAtributos2;

    ///*
    //CRIAÇÃO DE VARIAVEIS TIPO STRING
    char estado[20]; 
    char codigo[20]; 
    char cidade[20];
    char estado2[20]; 
    char codigo2[20]; 
    char cidade2[20];

    //Pede as informações da primeira carta
    printf("Digite as informacoes da primeira carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado);
    
    printf("Codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Populacao:\n");
    scanf("%u", &populacao);

    printf("Area:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos);

    //Pede as informações da segunda carta
    printf("Digite as informacoes da segunda carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado2);
     
    printf("Codigo da carta:\n");
    scanf("%s", &codigo2);
 
    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);
 
    printf("Populacao:\n");
    scanf("%u", &populacao2);

    printf("Area:\n");        
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);
 
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos2);
    //*/
 
    /*
    
            char estado[] = "Pernambuco";
            char codigo[] = "PE";
            char cidade[] = "Recife";
            populacao = 854789;
            area = 156;
            pib = 652;
            pontos = 15;

            char estado2[] = "Sao Paulo";
            char codigo2[] = "SP";
            char cidade2[] = "Sao Paulo";
            populacao2 = 854787;
            area2 = 154;
            pib2 = 657;
            pontos2 = 10;
    */   
 
    //CALCULOS CARTA 1:

    //Divide a população pela area e atribui o resultado a variável densidade
    densidade = (float) populacao / area;
    //Divide o PIB pela população e atribui o resultado a variável pibpc
    // Multiplica o valor de pib por 1 bilhão
    pibpc = (float) (pib * 1000000000) / populacao;
    //Calcular o super poder
    superpoder = (float) populacao + area + pib + pontos + pibpc + (-densidade);

    //CALCULOS CARTA 2:

     //Divide a população pela area e atribui o resultado a variável densidade2
    densidade2 = (float) populacao2 / area2;
    //Divide o PIB pela população e atribui o resultado a variável pibpc2
    // Multiplica o valor de pib2 por 1 bilhão
    pibpc2 = (float) (pib2 * 1000000000) / populacao2;
    //Calcular o super poder
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpc2 + (-densidade2);
    
    //Imprime as informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %u\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais.\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpc);
    printf("Super Poder: %.2f\n", superpoder);

    //Imprime as informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais.\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

    //JOGADOR ESCOLHE O ATRIBUTO DE COMPARAÇÃO
    printf("\n### ESCOLHA O PRIMEIRO ATRIBUTO ###\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("ESCOLHA:\n");
    scanf("%d", &escolhaJogador);

    //JOGADOR ESCOLHE O SEGUNDO ATRIBUTO DE COMPARAÇÃO
    printf("\n### ESCOLHA O SEGUNDO ATRIBUTO ###\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("ESCOLHA:\n");
    scanf("%d", &escolhaJogador2);

    //IMPRIME O NOME DAS CIDADES
    printf("\n### Carta 1 - %s x Carta 2 - %s ###\n", cidade, cidade2);

    //IMPRIME A ESCOLHA DOS ATRIBUTOS E OS VALORES
    if (escolhaJogador == escolhaJogador2) 
    {
        printf("Você escolheu o mesmo Atributo!\n");
    } else {
        switch (escolhaJogador)
        {
        case 1: //ATRIBUTO POPULACAO
            printf("Primeiro Atributo: \n[CARTA1]Populacao: %u - [CARTA2]Populacao: %u\n", populacao, populacao2);
            primeiroAtributo = populacao;
            segundoAtributo = populacao2;
            printf("CARTA - %s VENCEU!\n", (populacao > populacao2) ? cidade : cidade2);
            break;
        case 2: //ATRIBUTO AREA
            printf("Primeiro Atributo: \n[CARTA1]Area %.2f - [CARTA2]Area %.2f\n", area, area2);
            primeiroAtributo = area;
            segundoAtributo = area2;
            printf("CARTA - %s VENCEU!\n", (area > area2) ? cidade : cidade2);
            break;
        case 3: //ATRIBUTO PIB
            printf("Primeiro Atributo: \n[CARTA1]PIB %.2f - [CARTA2]PIB %.2f\n", pib, pib2);
            primeiroAtributo = pib;
            segundoAtributo = pib2;
            printf("CARTA - %s VENCEU!\n", (pib > pib2) ? cidade : cidade2);
            break;
        case 4: //ATRIBUTO PONTOS TURISTICOS
            printf("Primeiro Atributo: \n[CARTA1]Pontos Turisticos %d - [CARTA2]Pontos Turisticos %d\n" , pontos, pontos2);
            primeiroAtributo = pontos;
            segundoAtributo = pontos2;
            printf("CARTA - %s VENCEU!\n", (pontos > pontos2) ? cidade : cidade2);
            break;
        case 5: //ATRIBUTO DENSIDADE POPULACIONAL
            printf("Primeiro Atributo: \n[CARTA1]Densidade Populacional %.2f - [CARTA2]Densidade Populacional %.2f\n", densidade, densidade2);
            primeiroAtributo = densidade;
            segundoAtributo = densidade2;
            printf("CARTA - %s VENCEU!\n", (densidade < densidade2) ? cidade : cidade2);
            break;
        default:
            printf("Escolha Invalida!");
            break;
        }
        switch (escolhaJogador2)
        {
        case 1: //ATRIBUTO POPULACAO
            printf("Segundo Atributo: \n[CARTA1]Populacao: %u - [CARTA2]Populacao: %u\n", populacao, populacao2);
            primeiroAtributo2 = populacao;
            segundoAtributo2 = populacao2;
            printf("CARTA - %s VENCEU!\n", (populacao > populacao2) ? cidade : cidade2);
            break;
        case 2: //ATRIBUTO AREA
            printf("Segundo Atributo: \n[CARTA1]Area %.2f - [CARTA2]Area %.2f\n", area, area2);
            primeiroAtributo2 = area;
            segundoAtributo2 = area2;
            printf("CARTA - %s VENCEU!\n", (area > area2) ? cidade : cidade2);
            break;
        case 3: //ATRIBUTO PIB
            printf("Segundo Atributo: \n[CARTA1]PIB %.2f - [CARTA2]PIB %.2f\n", pib, pib2);
            primeiroAtributo2 = pib;
            segundoAtributo2 = pib2;
            printf("CARTA - %s VENCEU!\n", (pib > pib2) ? cidade : cidade2);
            break;
        case 4: //ATRIBUTO PONTOS TURISTICOS
            printf("Segundo Atributo: \n[CARTA1]Pontos Turisticos %d - [CARTA2]Pontos Turisticos %d\n" , pontos, pontos2);
            primeiroAtributo2 = pontos;
            segundoAtributo2 = pontos2;
            printf("CARTA - %s VENCEU!\n", (pontos > pontos2) ? cidade : cidade2);
            break;
        case 5: //ATRIBUTO DENSIDADE POPULACIONAL
            printf("Segundo Atributo: \n[CARTA1]Densidade Populacional %.2f - [CARTA2]Densidade Populacional %.2f\n", densidade, densidade2);
            primeiroAtributo2 = densidade;
            segundoAtributo2 = densidade2;
            printf("CARTA - %s VENCEU!\n", (densidade < densidade2) ? cidade : cidade2);
            break;
        default:
            printf("Escolha Invalida!\n");
            break;
        }
    }

    //SOMA OS DOIS ATRIBUTOS DAS DUAS CARTAS
    somaAtributos = primeiroAtributo + primeiroAtributo2; // SOMA DA CARTA 1
    somaAtributos2 = segundoAtributo + segundoAtributo2; // SOMA DA CARTA 2

    //IMPRIME A SOMA DOS ATRIBUTOS
    printf("\n[CARTA 1] PODER: %.2f - [CARTA 2] PODER: %2.f\n", somaAtributos, somaAtributos2);

    //IMPRIME O RESULTADO DA COMPARAÇÃO DAS SOMAS DOS ATRIBUTOS
    printf("CARTA: %s VENCEU\n", (somaAtributos > somaAtributos2) ? cidade : cidade2);

    return 0;
}