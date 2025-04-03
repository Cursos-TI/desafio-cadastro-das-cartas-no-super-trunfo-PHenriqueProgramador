#include <stdio.h>

// Desafio Super Trunfo - Países
int main(){


    long int populacao, populacao2, divisao;
    int numeroDePontosTuristicos, numeroDePontosTuristicos2, resultado1, resultado2;
    float area, area2, pib, pib2;
    float densidadepopulacional, densidadepopulacional2, pibPerCapita, pibPerCapita2;
    char estado[20], estado2[20], codigo[20], codigo2[20], nomedacidade[50], nomedacidade2[50];
    
    // ENTRADA DE DADOS DA PARA PRIMEIRA CARTA
    printf("Digite o Estado: ");
    scanf("%s", estado);  // Não colocar (\n) no scanf para (char)(%s) quando for ler mais entradas.
    printf("Digite o código do Estado: ");
    scanf("%s", codigo); // "A01 a A04"
      getchar(); // Agora o getchar consome o caractere '\n'
    printf("Digite o nome da cidade: ");
    fgets(nomedacidade, sizeof(nomedacidade), stdin);   
    printf("Digite o número da população: (sem pontos) ");
    scanf("%ld", &populacao); // %ld para long int    
    printf("Digite a área da cidade em quilometros quadrados:");
    scanf("%f", &area);    
    printf("Digite o PIB: ");
    scanf("%f", &pib);    
     printf("Digite o número de pontos turísticos: ");
     scanf("%d", &numeroDePontosTuristicos); 
   
    // CÁLCULO DA DENSIDADE POPULACIONAL
    densidadepopulacional = populacao / area;
    pibPerCapita = (pib * 1e9) / (float)populacao; // Multiplicando por 1 bilhão

    


// ENRADA DE DADOS PARA SEGUNDA CARTA

     printf("Digite o Estado: ");
      scanf("%s", estado2);  // Não colocar (\n) no scanf para (char)(%s) quando for ler mais entradas.
      printf("Digite o código do Estado: ");
      scanf("%s", codigo2); // "B01 a B04"
      getchar(); // Consome a quebra de linha deixada pelo scanf
       printf("Digite o nome da cidade: ");
      fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
       printf("Digite o número da população: (sem pontos) ");
        scanf("%ld", &populacao2); // %ld para long int
      printf("Digite a área da cidade em quilometros quadrados:");
      scanf("%f", &area2);
       printf("Digite o PIB: ");
       scanf("%f", &pib2);
      printf("Digite o nímero de pontos turísticos: ");
       scanf("%d", &numeroDePontosTuristicos2); 

       // CÁLCULO DA DENSIDADE POPULACIONAL
    densidadepopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / (float)populacao2; // Multiplicando por 1 bilhão


// informações exibidas

    printf("\n Carta 1 \n");
    printf("O Estado é: %s\n", estado); 
    printf("O código do Estado é: %s\n", codigo);
    printf("O nome da cidade é: %s", nomedacidade); // 'fgets' já inclui o '\n'
    printf("O número da população é de: %ld\n", populacao);
    printf("A área da cidade é de: %2.f km²\n", area);
    printf("O PIB é de: %f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", numeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f\n hab/km²", densidadepopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    printf("\n Carta 2 \n");
    printf("O Estado é: %s\n", estado2);
    printf("O código do Estado é: %s\n", codigo2);
    printf("O nome da cidade é: %s", nomedacidade2); // 'fgets' já inclui o '\n'
    printf("O número da população é de: %ld\n", populacao2);
    printf("A área da cidade é de: %2.f km²\n", area2);
    printf("O PIB é de: %f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f\n hab/km²", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);


return 0;



    /*INFORMAÇÇÕES DAS CARTAS
    CARTA 1:
    O Estado é: A
    O código do Estado é: A01
    O nome da cidade é: Niterói
    O número da população é de: 481749
    A área da cidade é de: 133.757 km²
    O PIB é de: 66 bilhoes de reais
    Pontos turísticos: 5
    
    Carta 2:
    O Estado é: B
    O código do Estado é: B02
    O nome da cidade é: Rio de Janeiro
    O número da população é de: 6211223
    A área da cidade é de: 1200 km²
    O PIB é de: 364 bilhões de reais
    Pontos turísticos: 5
    */

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   
}
