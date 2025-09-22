#include <stdio.h>
    int main(){

        //VARIAVEIS

        char estado1, estado2;
        char codigo_da_carta1[50], codigo_da_carta2[50];
        char nome_da_cidade1[50], nome_da_cidade2[50];
        int populacao1, populacao2;
        int pontos_turisticos1, pontos_turisticos2;
        float area1, area2;
        float pib1, pib2;
        
        //CADASTRO DA CARTA 1

        printf("=================================\n");       
        printf("Carta 1!\n\n");

        printf("Digite a Letra do Estado(Uma letra 'A' a 'H'): \n");
        scanf(" %c", &estado1);     //ESPAÇO ANTES DO %c PARA EVITAR BUGS COM \n

        printf("Digite o Código da Carta(ex: A01, B01): \n");
        scanf("%s", codigo_da_carta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nome_da_cidade1);

        printf("Digite a População da Cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos1);

       //CADASTRO DA CARTA 2

        printf("=================================\n");        
        printf("Carta 2!\n\n");

        printf("Digite a Letra do Estado(Uma letra 'A' a 'H'): \n");
        scanf(" %c", &estado2);                 
        
        printf("Digite o Código da Carta(ex: A01, B01): \n");
        scanf("%s", codigo_da_carta2);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nome_da_cidade2);

        printf("Digite a População da Cidade: \n");
        scanf("%d", &populacao2);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos_turisticos2);

        //EXIBIÇÃO DA CARTA 1 

        printf("=================================\n");
        printf("Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código da Carta: %s\n", codigo_da_carta1);
        printf("Nome da Cidade: %s\n", nome_da_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("=================================\n\n");

        //EXIBIÇÃO DA CARTA 2

        printf("=================================\n");
        printf("Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código da Carta: %s\n", codigo_da_carta2);
        printf("Nome da Cidade: %s\n", nome_da_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("=================================\n\n");        
        
        
        return 0;
}
