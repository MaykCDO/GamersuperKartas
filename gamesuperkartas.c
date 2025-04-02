#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //Declaração das variáveis para armazenar os atributos das cartas
    char letra1, letra2;
    char codigop1[4], codigop2[4];
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2; 
    int turismo1, turismo2;
    float pib1, pib2, area1, area2;
    float densidade1, densidade2, pibcapita1, pibcapita2;
    float superpoder1, superpoder2;
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;    

 // Array com os nomes dos atributos
 char *atributos[] = {
    "População", "Área", "PIB", "Número de pontos turísticos", "Densidade demográfica", "PIB per capita", "Super Poder"
};

    // Menssagem de introdução do jogo  
    printf("Bem-vindo ao jogo Super Kartas!\n");
    printf("Regras para Determinar a carta vencedora:\n");
    printf(" - Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.\n");
    printf(" - Para Densidade Populacional, a carta com o menor valor vence.\n");
    printf("Vamos começar!\n");
    printf("Para começar o jogo, defina as características das cartas!\n");

    //Entrada de dados para a primeira carta
    printf("\nCriando a Carta 1 \n");

    printf("Digite uma letra de 'A' a 'Z' para representar o País: ");
    scanf(" %c", &letra1);

    printf("Digite o código da pais: ");
    scanf("%s", codigop1);

    printf("Digite o nome da pais: ");
    getchar(); // Limpa o buffer
    fgets(pais1, sizeof(pais1), stdin);  // Usando fgets para permitir caracteres especiais
    pais1[strcspn(pais1, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da pais (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da pais (bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos(1-1000): ");
    scanf("%d", &turismo1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibcapita1 = (pib1 * 1000000000) / populacao1; // Converter o PIB da pais em bilhões
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibcapita1 + densidade1; // Somatoria dos atributos


    printf("\nTodos os dados foram definidas para a Carta 1. Agora defina os dados para a Carta 2.\n");

    //Entrada de dados para a segunda carta
    printf("\nCriando a Carta 2 \n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &letra2);

    printf("Digite o código da pais: ");
    scanf("%s", codigop2);

    printf("Digite o nome da pais: ");
    getchar(); // Limpa o buffer
    fgets(pais2, sizeof(pais2), stdin);  // Usando fgets para permitir caracteres especiais
    pais2[strcspn(pais2, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da pais: ");
    scanf("%f", &area2);

    printf("Digite o PIB da pais (bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos(1-1000): ");
    scanf("%d", &turismo2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pibcapita2 = (pib2 * 1000000000) / populacao2; // Converter o PIB do pais em bilhões
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapita2 + densidade2; // Somatoria dos atributos

    // Arrays com valores dos atributos
    float valores1[] = {populacao1, area1, pib1, turismo1, densidade1, pibcapita1, superpoder1};
    float valores2[] = {populacao2, area2, pib2, turismo2, densidade2, pibcapita2, superpoder2};

    //Saída de dados da carta 1
    printf("\nCarta 1: \n");
    printf("Letra representante: %c\nCódigo: %s\nPaís: %s\n", letra1, codigop1, pais1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao1, area1, pib1, turismo1, densidade1, pibcapita1, superpoder1);

    //Saída de dados da carta 2
    printf("\nCarta 2: \n");
    printf("Letra representante: %c\nCódigo: %s\npais: %s\n", letra2, codigop2, pais2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao2, area2, pib2, turismo2, densidade2, pibcapita2, superpoder2);


    // Menu para seleção de comparação do primeiro atributo
    printf("\nEscolha o primeiro atributo que deseja comparar das duas cartas.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    printf("\nEscolha a comparação: \n");
    scanf("%d", &primeiroAtributo);  

    switch(primeiroAtributo){
        case 1:
            printf("Você escolheu o atributo População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
            printf("Você escolheu o atributo Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("Você escolheu o atributo PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;   
            break;

        case 4:
            printf("Você escolheu o atributo Pontos turísticos!\n");
            resultado1 = turismo1 > turismo2 ? 1 : 0;
            break;
    
        case 5:
            printf("Você escolheu o atributo Densidade populacional!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB per Capita!\n");
            resultado1 =pibcapita1 > pibcapita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o atributo Super Poder\n");
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
     // Menu para seleção de comparação do segundo atributo
    printf("\nEscolha o segundo atributo que deseja comparar das duas cartas.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    printf("\nEscolha a comparação: \n");
    scanf("%d", &segundoAtributo);  

    if (primeiroAtributo == segundoAtributo)
    {
       printf("Você escolheu o mesmo atributo! \n");
    } else {
        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu o atributo População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            printf("Carta 2 - %s (%s):  %lu\n", pais2, codigop2, populacao2);
            break;

        case 2:
            printf("\nVocê escolheu o atributo Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            printf("Carta 2 - %s (%s): %.2f km²\n", pais2, codigop2, area2);
            break;

        case 3:
            printf("\nVocê escolheu o atributo PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;   
            printf("Carta 2 - %s (%s): %.2f bilhões\n", pais2, codigop2, pib2);
            break;

        case 4:
            printf("\nVocê escolheu o atributo Pontos turísticos!\n");
            resultado2 = turismo1 > turismo2 ? 1 : 0;
            printf("Carta 2 - %s (%s): %d\n", pais2, codigop2, turismo2);
            break;
    
        case 5:
            printf("\nVocê escolheu o atributo Densidade populacional!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", pais2, codigop2, densidade2);
            break;
        case 6:
            printf("Você escolheu o atributo PIB per Capita!\n");
            resultado1 =pibcapita1 > pibcapita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o atributo Super Poder\n");
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

    // Verifica se as escolhas são válidas
        if ((primeiroAtributo >= 1 && primeiroAtributo <= 7) && (segundoAtributo >= 1 && segundoAtributo <= 7) && (primeiroAtributo != segundoAtributo)) {
            int i = primeiroAtributo - 1;
            int j = segundoAtributo - 1;
    
            // Exibe os atributos comparados
            printf("\nComparação entre %s e %s:\n", atributos[i], atributos[j]);
            printf("Carta 1 - %s: %s = %.2f\n", pais1, atributos[i], valores1[i]);
            printf("Carta 1 - %s: %s = %.2f\n", pais1, atributos[j], valores1[j]);
            printf("Carta 2 - %s: %s = %.2f\n", pais2, atributos[i], valores2[i]);
            printf("Carta 2 - %s: %s = %.2f\n", pais2, atributos[j], valores2[j]);
    
            // Calcula e exibe a soma dos atributos para cada carta
            float soma1 = valores1[i] + valores1[j];
            float soma2 = valores2[i] + valores2[j];
            printf("Soma total dos atributos:\nCarta 1 - %s = %.2f\nCarta 2 - %s = %.2f\n", pais1, soma1, pais2, soma2);
    
            // Determina e exibe o vencedor
            if (soma1 > soma2) {
                printf("\nVencedor: Carta 1 - %s!\n", pais1);
            } else if (soma2 > soma1) {
                printf("\nVencedor: Carta 2 - %s!\n", pais2);
            } else {
                printf("\nEmpate entre Carta 1 - %s e Carta 2 - %s!\n", pais1, pais2);
            }
        } else {
            printf("Opção inválida ou atributos repetidos!\n");
        }
    
        return 0;
    }
    
}   