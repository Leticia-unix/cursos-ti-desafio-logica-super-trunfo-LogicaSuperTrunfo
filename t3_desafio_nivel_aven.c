#include <stdio.h>
int main(){




// ######## DESAFIO NÍVEL AVENTUREIRO #########

int opcao; // numero usado para o menu de comparação


//carta 1
//char estado[4]
char codigocarta[10];
//char nocidade[10];
int populacao, pontu;
float area, pib, dens, pibcar;

//carta2
//char estado2[4]
char codigocarta2[10];
//char nocidade2[10];
int populacao2, pontu2;
float area2, pib2, dens2, pibcar2;



printf("Carta 1 \n");

//printf("Estado da carta 1 \n");
//scanf("%s", estado);

printf("Código da carta:\n");
scanf("%s", codigocarta);

//printf("Nome da cidade:\n");
//scanf("%s", nocidade);

printf("População:\n");
scanf("%d", &populacao);

printf("Área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Pontos Turísticos:\n");
scanf("%d", &pontu);

dens =  populacao / area;
pibcar =  pib  / populacao;





printf("Carta 2 \n");

//printf("Estado da carta 2: \n");
//scanf("%s", estado2);

printf("Código da carta 2:\n");
scanf("%s", codigocarta2);

//printf("Nome da cidade da carta 2:\n");
//scanf("%s", nocidade2);

printf("População da carta 2:\n");
scanf("%d", &populacao2);

printf("Área da carta 2:\n");
scanf("%f", &area2);

printf("PIB da carta 2:\n");
scanf("%f", &pib2);

printf("Pontos Turísticos:\n");
scanf("%d", &pontu2);

dens2 =  populacao2 / area2;
pibcar2 =  pib2  / populacao2;

printf("###Comparação de Atributos!###\n");
printf("Escolha um atributo para comparar:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de Pontos Turísticos.\n");
printf("5.Densidade Demográfica.\n");
scanf("%d" , &opcao);



















//menu
switch (opcao)
{
case 1:
    if (opcao == 1 ){
        if(populacao > populacao2){
            printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
            printf("Atributo usado foi: População\n");
            printf("Os valores são: %d, %d\n", populacao,populacao2);
            printf("A carta 2\n");
    }else {
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: População\n");
        printf("Os valores são: %d, %d\n", populacao,populacao2);
        printf("A carta 2 venceu");
    }
}
    break;
case 2:
    if (opcao ==2){
    if(area > area2){
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Área\n");
        printf("Os valores são: %f, %f\n", area,area2);
        printf("A carta %s venceu", codigocarta);
    }else{
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Área\n");
        printf("Os valores são: %f, %f\n", area,area2);
        printf("A carta %s venceu", codigocarta2);
    }
}
    break;

case 3:
    if(opcao == 4){
        if(pib > pib2){
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: PIB\n");
        printf("Os valores são: %f, %f\n", pib,pib);
        printf("A carta %s venceu", codigocarta);
    }else{
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: PIB\n");
        printf("Os valores são: %f, %f\n", pib,pib);
        printf("A carta %s venceu", codigocarta2);
    }
}
    break;

case 4:
    if (opcao == 4){
    if(pontu > pontu2){
         printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Número de pontos turísticos\n");
        printf("Os valores são: %d, %d\n", pontu,pontu);
        printf("A carta %s venceu", codigocarta);
    }else{
         printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Pontos Turísticos\n");
        printf("Os valores são: %d, %d\n", pontu,pontu2);
        printf("A carta %s venceu", codigocarta2);
    }
}
    break;

case 5:
    if(opcao == 5){
    if(dens < dens2){
         printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Densidade Demografica\n");
        printf("Os valores são: %f, %f\n", dens,dens2);
        printf("A carta %s venceu", codigocarta);
    }else{
        printf("O nome das cartas: %s , %s\n", codigocarta, codigocarta2);
        printf("Atributo usado foi: Densidade Demografica\n");
        printf("Os valores são: %f, %f\n", dens,dens2);
        printf("A carta %s venceu", codigocarta2);
    }
}
    break;


default:
    printf("opção inválida");
    break;
}

return 0;
}
