
#include <stdio.h>


//Criação da base do programa//
int main (){
    char estado_1 = 'F';
    char estado_2 = 'A';
    char codigo_carta[20] = "A01";
    char codigo_carta_2[20] = "A02";
    char nome_cidade_1[20]= "Fortaleza";
    char nome_cidade_2[20]= "Alagoas";
    int populacao_1 = 287495;
    int populacao_2 = 98871; 
    float area_1 = 12345.12;
    float area_2 = 7236.13; 
    float pib_1 = 123.12;
    float pib_2 = 32.3;
    int pontos_turisticos_1 = 30;
int pontos_turisticos_2 = 40; 

//Criação da carta numero 01

printf("\n---CARTA 01---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d Habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);

//Criação da carta numero 02

printf("\n---CARTA 02---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d Habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);

return 0; 
   
// Para criação da carta 02, apenas copiei e colei o primeiro código mudando apenas algumas minimas coisas das variáveis.

}