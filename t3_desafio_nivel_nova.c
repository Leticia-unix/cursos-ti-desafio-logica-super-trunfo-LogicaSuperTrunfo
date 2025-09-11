#include <stdio.h>
int main (){





//----- NÍVEL NOVATO -----
//COMPARANDO CARTAS DO SUPER TRUNFO


//carta 1
char estado[4], codigocarta[10], nocidade[10];
int populacao, pontu;
float area, pib, dens, pibcar;

//carta2
char estado2[4], codigocarta2[10], nocidade2[10];
int populacao2, pontu2;
float area2, pib2, dens2, pibcar2;



printf("Carta 1 \n");

printf("Estado da carta 1 \n");
scanf("%s", estado);

printf("Código da carta:\n");
scanf("%s", codigocarta);

printf("Nome da cidade:\n");
scanf("%s", nocidade);

printf("População:\n");
scanf("%d", &populacao);

printf("Área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

dens =  populacao / area;
pibcar =  pib  / populacao;





printf("Carta 2 \n");

printf("Estado da carta 2: \n");
scanf("%s", estado2);

printf("Código da carta 2:\n");
scanf("%s", codigocarta2);

printf("Nome da cidade da carta 2:\n");
scanf("%s", nocidade2);

printf("População da carta 2:\n");
scanf("%d", &populacao2);

printf("Área da carta 2:\n");
scanf("%f", &area2);

printf("PIB da carta 2:\n");
scanf("%f", &pib2);

dens2 =  populacao2 / area2;
pibcar2 =  pib2  / populacao2;

//determinar a carta vencedora
if(populacao > populacao2){
    printf("A carta 1 - %s - tem a maior população\n", estado);
}else{
    printf("A carta 2 - %s - tem a maior população\n", estado2);
}




    return 0;
}