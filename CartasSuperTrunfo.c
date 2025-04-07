#include <stdio.h>
    //Desafio Super Trunfo - Nível Mestre!
    //  PHProgamador
int main(){
    int pontosTuristicosA, pontosTuristicosB, resultadoA, resultadoB;
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB, densidadeA, densidadeB, pibpercapitaA, pibpercapitaB, superpoderA, superpoderB; // **LEMBRANDO QUE O SUPERPODER É A SOMA DE POPUAÇÃO, ÁREA, PIB, PIB PER CAPITA E DENSIDADE POPULACIONAL INVERTIDA PARA COMPARAÇÃO E NÚMERO DE PONTOS TURÍSTICOS**
    char estadoA[20], estadoB[20], codigoA[30], codigoB[30], cidadeA[50], cidadeB[50], carta1[20], carta2[20];
    
        printf("\nDESAFIO SUPER TRUNFO\n");
        printf("CARTA 1:\n");

        //Entrda de Dados Carta 1

            printf("Qual é o Estado? ");
            scanf(" %[^\n]", estadoA);

            printf("Qual é o código do Estado? ");
            scanf("%s", codigoA);

            printf("Qual é o número da população? ");
            scanf("%lu", &populacaoA);

            getchar();
            printf("Qual é o nome da cidade? ");
            fgets(cidadeA, sizeof(cidadeA), stdin);

            printf("Qual é a área da cidade em quilometros quadrados?");
            scanf("%f", &areaA);

            printf("Qual é o PIB? ");
            scanf("%f", &pibA);

            printf("Qual é o número de pontos turísticos? ");
            scanf("%d", &pontosTuristicosA);

        // CÁLCULO DE DENSIDADE POPULACIONAL

            densidadeA = populacaoA / areaA;
            pibpercapitaA = (pibA * 1e9) / (float)populacaoA; // (1e9 Multiplicando por 1 Bilhão)

        //Entrada de Dados Carta 2
    printf("CARTA 2:\n");

        printf("Qual é o Estado? ");
            scanf(" %[^\n]", estadoB);

            printf("Qual é o código do Estado? ");
            scanf("%s", codigoB);

            printf("Qual é o número da população? ");
            scanf("%lu", &populacaoB);

            getchar();
            printf("Qual é o nome da ciade? ");
            fgets(cidadeB, sizeof(cidadeB), stdin);

            printf("Qual é a área da cidade em quilometros quadrados?");
            scanf("%f", &areaB);

            printf("Qual é o PIB? ");
            scanf("%f", &pibB);

            printf("Qual é o número de pontos turísticos? ");
            scanf("%d", &pontosTuristicosB);

        // CÁLCULO DE DENSIDADE POPULACIONAL

            densidadeB = populacaoB / areaB;
            pibpercapitaB = (pibB * 1e9) / (float)populacaoB; // (1e9 Multiplicando por 1 Bilhão)

        // CÁLCULO DO SUPER PODER
            superpoderA = populacaoA + areaA + pibA + pontosTuristicosA + pibpercapitaA + (1 / densidadeA);
            superpoderB = populacaoB + areaB + pibB + pontosTuristicosB + pibpercapitaA +(1 / densidadeB);

         //Saída de Dados 

        printf("\nCARTA 1\n");
        printf("Estado: %s\nCódigo: %s\nCidade: %sPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estadoA, codigoA, cidadeA, populacaoA, areaA, pibA, pontosTuristicosA, densidadeA, pibpercapitaA, superpoderA);

        printf("\nCARTA 2\n");
        printf("Estado: %s\nCódigo: %s\nCidade: %sPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estadoB, codigoB, cidadeB, populacaoB, areaB, pibB, pontosTuristicosB, densidadeB, pibpercapitaB, superpoderB);
       
        // Comparação de atributos
        printf("\nComparação de Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", (populacaoA > populacaoB) ? 1 : 2, populacaoA > populacaoB);
        printf("Área: Carta %d venceu (%d)\n", (areaA > areaB) ? 1 : 2, areaA > areaB);
        printf("PIB: Carta %d venceu (%d)\n", (pibA > pibB) ? 1 : 2, pibA > pibB);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicosA > pontosTuristicosB) ? 1 : 2, pontosTuristicosA > pontosTuristicosB);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadeA < densidadeB) ? 1 : 2, densidadeA < densidadeB);
        printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapitaA > pibpercapitaB) ? 1 : 2, pibpercapitaA > pibpercapitaB);
        printf("Super Poder: Carta %d venceu (%d)\n", (superpoderA > superpoderB) ? 1 : 2, superpoderA > superpoderB);
        
return 0;
    }
