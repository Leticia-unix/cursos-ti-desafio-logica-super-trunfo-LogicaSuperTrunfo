#include <stdio.h>
int main(){




// ######## DESAFIO NÍVEL AVENTUREIRO #########

int opcao, opcao2; // numero usado para o menu de comparação
int resultado1, resultado2;
int carta1;
//int comparacao;

//carta 1
int populacao = 9500; 
int pontu = 10;
float area = 1500.25; 
float pib = 6020.28; 
float dens =1111.47; 
float pibcar = 2000.32;

//carta2
int populacao2 = 3600; 
int pontu2 = 30;
float area2 = 1200.25;
float pib2 = 8542.50;
float dens2 = 5622.24;
float pibcar2 = 4000.91;



printf("Escolha uma carta: 1 ou 2\n");
scanf("%d", &carta1);

printf("###Comparação de Atributos!###\n");
printf("Escolha um atributo para comparar:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de Pontos Turísticos.\n");
printf("5.Densidade Demográfica.\n");
printf("6.PIB per Capita.\n");
scanf("%d" , &opcao);

    if(carta1 == 1){

    switch (opcao)
{
case 1:
    printf("Você escolheu o atributo população!\n");
    resultado1 = populacao > populacao2 ? 1 : 0;
    printf("%d\n", resultado1);
    break;

case 2:
    printf("Você escolheu o atributo área\n");
    resultado1 = area > area2 ? 1 : 0;
    printf("%d\n", resultado1);
    break;

case 3:
    printf("Você escolheu o atributo PIB!\n");
    resultado1 = pib2 > pib ? 1 : 0;
    printf("%d\n", resultado1);
    break;

case 4:
    printf("Você escolheu o atributo ponto turístico!\n");
    resultado1 = pontu > pontu2 ? 1 : 0;
    printf("%d\n", resultado1);
    break;

case 5:
    printf("Você escolheu o atributo densidade demográfica!\n");
    resultado1 = dens < dens2 ? 1 : 0;
    printf("%d\n", resultado1);
    break;

case 6:
    printf("Você escolheu o atributo PIB per capita!\n");
    resultado1 = pibcar > pibcar2 ? 1 : 0;
    printf("%d\n", resultado1);
    break;


default:
    printf("Opção inválida! Tente novamente!\n");
    break;
}

//#####SEGUNDO ATRIBUTO#####

printf("###Comparação de Atributos!###\n");
printf("Escolha o segundo atributo para comparar:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de Pontos Turísticos.\n");
printf("5.Densidade Demográfica.\n");
printf("6.PIB per Capita.\n");
scanf("%d" , &opcao2);

if(opcao == opcao2){
    printf("Você escolheu o mesmo atributo! Tente de novo!");
}else{    
    switch (opcao2)
    {
    case 1:
        printf("Você escolheu o atributo população!\n");
        resultado2 = populacao > populacao2 ? 1: 0 ;
        printf("%d\n", resultado2);
        break;

    case 2:
        printf("Você escolheu o atributo área\n");
        resultado2 = area > area2 ? 1 : 0;
        printf("%d\n", resultado2);
        break;

    case 3:
        printf("Você escolheu o atributo PIB!\n");
        resultado2 = pib > pib2 ? 1 : 0;
        printf("%d\n", resultado2);
        break;

    case 4:
        printf("Você escolheu o atributo ponto turístico!\n");
        resultado2 = pontu > pontu2 ? 1 : 0;
        printf("%d\n", resultado2);
        break;

    case 5:
        printf("Você escolheu o atributo densidade demográfica!\n");
        resultado2 = dens < dens2 ? 1 : 0;
        printf("%d\n", resultado2);
        break;

    case 6:
        printf("Você escolheu o atributo PIB per capita!\n");
        resultado2 = pibcar > pibcar2 ? 1 : 0;
        printf("%\n", resultado2);
        break;


    default:
        printf("Opção inválida! Tente novamente!\n");
        break;
    }
    
}
    }

//SE FOR CARTA 2 
    if(carta1 == 2){

    switch (opcao)
{
case 1:
    printf("Você escolheu o atributo população!\n");
    resultado1 = populacao2 > populacao ? 1 : 0;
    
    break;

case 2:
    printf("Você escolheu o atributo área\n");
    resultado1 = area2 > area ? 1 : 0;
    
    break;

case 3:
    printf("Você escolheu o atributo PIB!\n");
    resultado1 = pib2 > pib ? 1 : 0;
    
    break;

case 4:
    printf("Você escolheu o atributo ponto turístico!\n");
    resultado1 = pontu2 > pontu ? 1 : 0;
    
    break;

case 5:
    printf("Você escolheu o atributo densidade demográfica!\n");
    resultado1 = dens2 < dens ? 1 : 0;
    
    break;

case 6:
    printf("Você escolheu o atributo PIB per capita!\n");
    resultado1 = pibcar2 > pibcar ? 1 : 0;
    
    break;


default:
    printf("Opção inválida! Tente novamente!\n");
    break;
}

//#####SEGUNDO ATRIBUTO#####

printf("###Comparação de Atributos!###\n");
printf("Escolha o segundo atributo para comparar:\n");
printf("1.População.\n");
printf("2.Área.\n");
printf("3.PIB.\n");
printf("4.Número de Pontos Turísticos.\n");
printf("5.Densidade Demográfica.\n");
printf("6.PIB per Capita.\n");
scanf("%d" , &opcao2);

if(opcao == opcao2){
    printf("Você escolheu o mesmo atributo! Tente de novo!");
}else{    
    switch (opcao2)
    {
    case 1:
        printf("Você escolheu o atributo população!\n");
        resultado2 = populacao2 > populacao ? 1: 0 ;
        
        break;

    case 2:
        printf("Você escolheu o atributo área\n");
        resultado2 = area2 > area ? 1 : 0;
        
        break;

    case 3:
        printf("Você escolheu o atributo PIB!\n");
        resultado2 = pib2 > pib ? 1 : 0;
        
        break;

    case 4:
        printf("Você escolheu o atributo ponto turístico!\n");
        resultado2 = pontu2 > pontu ? 1 : 0;
        
        break;

    case 5:
        printf("Você escolheu o atributo densidade demográfica!\n");
        resultado2 = dens2 < dens ? 1 : 0;
        
        break;

    case 6:
        printf("Você escolheu o atributo PIB per capita!\n");
        resultado2 = pibcar2 > pibcar ? 1 : 0;
        
        break;


    default:
        printf("Opção inválida! Tente novamente!\n");
        break;
    }
    
}
    }

    


    if ((resultado1 == 1) && (resultado2 == 1)){
        printf("Você venceu!\n");
    }else if (((resultado1 == 1) && (resultado2 ==0)) ||( (resultado1 == 0) && (resultado2 == 1) )){
        printf("Empate!!\n");

    }else{
        printf("Você perdeu!!\n");
    }

    


    //SE O JOGADOR ESCOLHEU CARTA 1
    if(carta1 == 1){
        printf("Carta 1 escolhida\n");
        if(opcao == 1){
            
            printf("Atributo População escolhida: \n");
            printf("População carta 1: %d , população carta 2: %d\n", populacao, populacao2);
        }else if (opcao == 2){
            
            printf("Atributo Área escolhida: \n");
            printf("Área carta 1: %f , Área carta 2: %f\n", area, area2);           
        }else if(opcao ==3){
            
            printf("Atributo PIB escolhida: \n");
            printf("PIB carta 1: %f , PIB carta 2: %f\n", pib, pib2);
        }else if(opcao == 4){
            
            printf("Atributo Ponto Turistico escolhida: \n");
            printf("Ponto Turístico carta 1: %d , ponto turístico carta 2: %d\n", pontu, pontu2);
        } else if (opcao == 5){
            
            printf("Atributo Densidade Demográfica escolhida: \n");
            printf("Densidade Demográfica carta 1: %f , população carta 2: %f\n", dens, dens2);
        }else{
            
            printf("Atributo PIB per Carpita: \n");
            printf("PIB per Ca´pita carta 1: %f , PIB per Capita carta 2: %f\n", pibcar, pibcar2);
        }
    }else{
        printf(" \n");
    }
        //Atributo 2
        if(carta1 == 1){
        if(opcao2 == 1){
            
            printf("Atributo População escolhida: \n");
            printf("População carta 1: %d , população carta 2: %d\n", populacao, populacao2);
        }else if (opcao2 == 2){
            
            printf("Atributo Área escolhida: \n");
            printf("Área carta 1: %f , Área carta 2: %f\n", area, area2);           
        }else if(opcao2 ==3){
            
            printf("Atributo PIB escolhida: \n");
            printf("PIB carta 1: %f , PIB carta 2: %f\n", pib, pib2);
        }else if(opcao2 == 4){
            
            printf("Atributo Ponto Turistico escolhida: \n");
            printf("Ponto Turístico carta 1: %d , ponto turístico carta 2: %d\n", pontu, pontu2);
        } else if (opcao2 == 5){
            
            printf("Atributo Densidade Demográfica escolhida: \n");
            printf("Densidade Demográfica carta 1: %f , população carta 2: %f\n", dens, dens2);
        }else{
            
            printf("Atributo PIB per Carpita: \n");
            printf("PIB per Capita carta 1: %f , PIB per Capita carta 2: %f\n", pibcar, pibcar2);
        }
    }else{
        printf(" \n");
    }

    //SE ESCOLHEU CARTA 2
        //SE O JOGADOR ESCOLHEU CARTA 1
    if(carta1 == 2){
        printf("Carta 2 escolhida\n");
        if(opcao == 1){
            
            printf("Atributo População escolhida: \n");
            printf("População carta 1: %d , população carta 2: %d\n", populacao, populacao2);
        }else if (opcao == 2){
            
            printf("Atributo Área escolhida: \n");            
            printf("Área carta 1: %f , Área carta 2: %f\n", area, area2);           
        }else if(opcao ==3){
            
            printf("Atributo PIB escolhida: \n");
            printf("PIB carta 1: %f , PIB carta 2: %f\n", pib, pib2);
        }else if(opcao == 4){
            
            printf("Atributo Ponto Turistico escolhida: \n");
            printf("Ponto Turístico carta 1: %d , ponto turístico carta 2: %d\n", pontu, pontu2);
        } else if (opcao == 5){
            
            printf("Atributo Densidade Demográfica escolhida: \n");
            printf("Densidade Demográfica carta 1: %f , população carta 2: %f\n", dens, dens2);
        }else{
            
            printf("Atributo PIB per Carpita: \n");
            printf("PIB per Ca´pita carta 1: %f , PIB per Capita carta 2: %f\n", pibcar, pibcar2);
        }
    }else{
        printf(" \n");
    }

        if(carta1 == 2){
        if(opcao2 == 1){
            
            printf("Atributo População escolhida: \n");
            printf("População carta 1: %d , população carta 2: %d\n", populacao, populacao2);
        }else if (opcao2 == 2){
            
            printf("Atributo Área escolhida: \n");
            printf("Área carta 1: %f , Área carta 2: %f\n", area, area2);           
        }else if(opcao2 ==3){
            
            printf("Atributo PIB escolhida: \n");
            printf("PIB carta 1: %f , PIB carta 2: %f\n", pib, pib2);
        }else if(opcao2 == 4){
            
            printf("Atributo Ponto Turistico escolhida: \n");
            printf("Ponto Turístico carta 1: %d , ponto turístico carta 2: %d\n", pontu, pontu2);
        } else if (opcao2 == 5){
            
            printf("Atributo Densidade Demográfica escolhida: \n");
            printf("Densidade Demográfica carta 1: %f , população carta 2: %f\n", dens, dens2);
        }else{
            
            printf("Atributo PIB per Carpita: \n");
            printf("PIB per Capita carta 1: %f , PIB per Capita carta 2: %.2f\n", pibcar, pibcar2);
        }
    }else{
        printf(" \n");
    }



    
 

return 0;
}