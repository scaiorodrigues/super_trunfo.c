int main() {
    // Carta 1
    char estado1 ="A";
    char codigo1[5] = "A01";
    char cidade1[30] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int ptsTuristicos1 = 50;

    // Carta 2
    char estado2 = "B";
    char codigo2[5] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 678000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int ptsTuristicos2 = 30;

    // Exibição de dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s=\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptsTuristicos1);

    printf("\n");

    // Exibição de dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhôes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptsTuristicos2);

    return 0;
}
