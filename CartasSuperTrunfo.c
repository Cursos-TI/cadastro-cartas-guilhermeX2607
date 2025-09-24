#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Calculando Densidade Populacional e PIB per Capita
//

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1[3], Estado2[3], Codigo1[2], Codigo2[2], Cidade1[20], Cidade2[20];
    int PontosT1, PontosT2;
    float Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2;
    float PIBpcapita1, PIBpcapita2;
    float DensidadeP1,DensidadeP2;

    
    
    // Área para entrada de dados
    // Carta 1
    printf("Digite a letra do seu estado: \n");
    scanf("%s",&Estado1);
  
    printf("Digite o codigo da cidade: \n");
    scanf("%s",&Codigo1);

    printf("Digite o nome da sua cidade sem espaço: \n");
    scanf("%s",&Cidade1);

    printf("Digite o numero de habitantes da sua cidade: \n");
    scanf("%f",&Populacao1);

    printf("Digite a area em metros quadrados da sua cidade: \n");
    scanf("%f",&Area1);

    printf("Digite a estimativa de PIB da sua cidade: \n");
    scanf("%f",&PIB1);

    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d",&PontosT1);

    // Carta 2
    printf("Digite a letra do segundo estado: \n");
    scanf("%s",&Estado2);
  
    printf("Digite o codigo da segunda cidade: \n");
    scanf("%s",&Codigo2);

    printf("Digite o nome da sua segunda cidade sem espaço: \n");
    scanf("%s",&Cidade2);

    printf("Digite o numero de habitantes da segunda cidade: \n");
    scanf("%f",&Populacao2);

    printf("Digite a area em metros quadrados da segunda cidade: \n");
    scanf("%f",&Area2);

    printf("Digite a estimativa de PIB da segunda cidade: \n");
    scanf("%f",&PIB2);

    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d",&PontosT2);
 
    // Área para exibição dos dados da cidade

    PIBpcapita1 = PIB1 / Populacao1;
    PIBpcapita2 = PIB2 / Populacao2;
    
    DensidadeP1 = Populacao1 / Area1;
    DensidadeP2 = Populacao2 / Area2;
    

    printf("Carta 1: \n");
    printf("Estado: %s \n",Estado1);
    printf("Codigo: %s%s \n",Estado1,Codigo1);
    printf("Nome da cidade: %s \n",Cidade1);
    printf("Populacao: %.2f \n",Populacao1);
    printf("Area: %.2f \n",Area1);
    printf("PIB: %.2f \n",PIB1);
    printf("Numero de pontos turisticos: %d \n",PontosT1);
    printf("Densidade Populacional: %.2f \n",DensidadeP1);
    printf("PIB Per Capita: %.2f \n",PIBpcapita1);
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s \n",Estado2);
    printf("Codigo: %s%s \n",Estado1,Codigo2);
    printf("Nome da cidade: %s \n",Cidade2);
    printf("Populacao: %.2f \n",Populacao2);
    printf("Area: %.2f \n",Area2);
    printf("PIB: %.2f \n",PIB2);
    printf("Numero de pontos turisticos: %d \n",PontosT2);
    printf("Densidade Populacional: %.2f \n",DensidadeP2);
    printf("PIB Per Capita: %.2f \n",PIBpcapita2);
  
return 0;

} 
