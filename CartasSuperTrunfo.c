#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Letra de representação do estado:
    char estado1[10],estado2[10];
    //Código da carta (tipo string):
    char carta1[10],carta2[10];
    //Nome da cidade:
    char nome1[10],nome2[10];
    //Número de habitantes da cidade:
    int habitantes1,habitantes2;
    //Área em km²:
    float area1,area2;
    //PIB da cidade:
    float PIB1,PIB2;
    //Quantidade de pontos turísticos da cidade:
    int pontos_turisticos1,pontos_turisticos2;
    //Densidade Populacional (o valor é encontrado por população/área da cidade):
    float Densidade_pop1,Densidade_pop2;
    //PIB per Capita (o valor é encontrado por PIB/população):
    float pib_per_cap1,pib_per_cap2;


    //Utilizado "\n" para estruturar cada campo, "%s" para os string vulgo char, "%d" para os números inteiros decimais vulgo int, "%f" para os pontos flutuantes vulgo float:
    //Informações a serem exibidas no terminal vulgo "printf", orientando o que o usuário deva fazer:
    printf ("Carta 1:\n");
    printf ("Digite a letra que representa o estado de A a H:");
    //Informações a serem capturadas vulgo "scanf", após o usuário digitar o que é pedido.
    scanf ("%s",estado1);
    //Mesmo processo para as linhas posteriores.
    printf ("Digite o código da carta (ex: A01, B03):");
    scanf ("%s",carta1);
    printf ("Digite o nome da Cidade:");
    scanf ("%s",nome1);
    printf ("Digite o número de habitantes dessa cidade:");
    scanf ("%d",&habitantes1);
    printf ("Digite a área em km²:");
    scanf ("%f",&area1);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB1);
    printf ("Digite o nº de pontos turísticos:");
    scanf("%d",&pontos_turisticos1);
    //Conversão dos dados
    Densidade_pop1 = (float) habitantes1/area1;
    pib_per_cap1 = (float) PIB1/habitantes1;

    printf ("\nCarta 2:\n");
    printf ("Digite a letra que representa o estado  de A a H:");
    scanf ("%s",estado2);
    printf ("Digite o código da carta (ex: A01, B03):");
    scanf ("%s",carta2);
    printf ("Digite o nome da Cidade:");
    scanf ("%s",nome2);
    printf ("Digite o número de habitantes dessa cidade:");
    scanf ("%d",&habitantes2);
    printf ("Digite a área em km²:");
    scanf ("%f",&area2);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB2);
    printf ("Digite o nº de pontos turísticos:");
    scanf("%d",&pontos_turisticos2);
    //Conversão dos dados
    Densidade_pop2 = (float) habitantes2/area2;
    pib_per_cap2 = (float) PIB2/habitantes2;

    //Informações a serem exibidas de cada carta após o usuário preencher os dados solicitados:
    printf ("\n\n\nCarta 1:\n");
    printf ("Letra representante do estado:%s\n",estado1);
    printf ("Código da carta representante:%s\n",carta1);
    printf ("Nome da cidade:%s\n",nome1);
    printf ("Número de habitantes:%d habitantes\n",habitantes1);
    printf ("Área em km²:%.2fkm²\n",area1);
    printf ("PIB:%.2f bilhões de reais\n",PIB1);
    printf ("Número de pontos turísticos:%d\n",pontos_turisticos1);
    printf ("Densidade populacional:%.2f hab/km²\n",Densidade_pop1);
    printf ("PIB per capita:%.2f reais",pib_per_cap1);

    printf ("\n\nCarta 2:\n");
    printf ("Letra representante do estado:%s\n",estado2);
    printf ("Código da carta:%s\n",carta2);
    printf ("Nome da cidade:%s\n",nome2);
    printf ("Número de habitantes:%d habitantes\n",habitantes2);
    printf ("Área em km²:%.2fkm²\n",area2);
    printf ("PIB:%.2f bilhões de reais\n",PIB2);
    printf ("Número de pontos turísticos:%d\n",pontos_turisticos2);
    printf ("Densidade populacional:%.2f hab/km²\n",Densidade_pop2);
    printf ("PIB per capita:%.2f reais\n\n\n",pib_per_cap2);

    return 0;
}
