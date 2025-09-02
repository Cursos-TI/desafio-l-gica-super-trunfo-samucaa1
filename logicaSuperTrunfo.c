#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    printf("Cartas Super Trunfo\n\n");
    printf("Carta 1:\n\n");

    printf("Digite o Estado (sigla): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Densidade populacional
    if (area1 != 0.0f)
        densidadepopulacional1 = (float) populacao1 / area1;
    else {
        densidadepopulacional1 = 0.0f;
        printf("Atenção: Área da cidade da Carta 1 é zero. Densidade definida como 0.\n");
    }

    // PIB per capita
    if (populacao1 != 0)
        pibpercapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    else {
        pibpercapita1 = 0.0f;
        printf("Atenção: População da cidade da Carta 1 é zero. PIB per Capita definido como 0.\n");
    }

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    printf("\nCarta 2:\n\n");

    printf("Digite o Estado (sigla): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Densidade populacional
    if (area2 != 0.0f)
        densidadepopulacional2 = (float) populacao2 / area2;
    else {
        densidadepopulacional2 = 0.0f;
        printf("Atenção: Área da cidade da Carta 2 é zero. Densidade definida como 0.\n");
    }

    // PIB per capita
    if (populacao2 != 0)
        pibpercapita2 = (pib2 * 1000000000.0f) / (float) populacao2;
    else {
        pibpercapita2 = 0.0f;
        printf("Atenção: População da cidade da Carta 2 é zero. PIB per Capita definido como 0.\n");
    }

    // Exibição das cartas
    printf("\n--- Carta 01 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n--- Carta 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // ================================
    // Menu de escolha dos dois atributos
    // ================================
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    // Verificação para não permitir atributos iguais
    if (escolha1 == escolha2) {
        printf("Erro: Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Switch para o primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosturisticos1; valor1_c2 = pontosturisticos2; break;
        case 5: valor1_c1 = densidadepopulacional1; valor1_c2 = densidadepopulacional2; break;
        case 6: valor1_c1 = pibpercapita1; valor1_c2 = pibpercapita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Switch para o segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosturisticos1; valor2_c2 = pontosturisticos2; break;
        case 5: valor2_c1 = densidadepopulacional1; valor2_c2 = densidadepopulacional2; break;
        case 6: valor2_c1 = pibpercapita1; valor2_c2 = pibpercapita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // ================================
    // Comparação dos atributos
    // ================================
    int pontos_c1 = 0, pontos_c2 = 0;

    // Comparação do primeiro atributo
    if (escolha1 == 5) { // densidade → menor vence
        (valor1_c1 < valor1_c2) ? pontos_c1++ : (valor1_c2 < valor1_c1) ? pontos_c2++ : 0;
    } else {
        (valor1_c1 > valor1_c2) ? pontos_c1++ : (valor1_c2 > valor1_c1) ? pontos_c2++ : 0;
    }

    // Comparação do segundo atributo
    if (escolha2 == 5) { // densidade → menor vence
        (valor2_c1 < valor2_c2) ? pontos_c1++ : (valor2_c2 < valor2_c1) ? pontos_c2++ : 0;
    } else {
        (valor2_c1 > valor2_c2) ? pontos_c1++ : (valor2_c2 > valor2_c1) ? pontos_c2++ : 0;
    }

    // ================================
    // Exibição do resultado final
    // ================================
    printf("\n--- RESULTADO FINAL ---\n");
    printf("Carta 1 (%s) - Pontos: %d\n", nome1, pontos_c1);
    printf("Carta 2 (%s) - Pontos: %d\n", nome2, pontos_c2);

    if (pontos_c1 > pontos_c2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    else if (pontos_c2 > pontos_c1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
