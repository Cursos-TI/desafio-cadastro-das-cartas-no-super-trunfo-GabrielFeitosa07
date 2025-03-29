#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main() {
    float area, pib;
    int population, tourist_attrations;
    int number_card;
    char city[50];
    char cod_card[5];
    char state;

    printf("Digite uma letra de A a H (representando os estados): ");
    scanf("%c", &state);

    printf("Digite o código da carta. O código é composto da letra do estado (digitada anteriormente): ");
    scanf("%s", &cod_card);

    //Limpa o buffer de entrada
    scanf("%*[^\n]");
    scanf("%*c");

    printf("Digite o nome da cidade: ");
    fgets(city, 50, stdin);
    city[strcspn(city, "\n")] = 0;

    printf("Digite o número de pessoas que residem na cidade: ");
    scanf(" %d", &population);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &tourist_attrations);

    printf("\n");
    printf("Carta: %d\n", number_card);

    printf("Estado: %c\n", state);
    printf("Código da carta: %s\n", cod_card);
    printf("Cidade: %s\n", city);
    printf("População: %d de pessoas\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", tourist_attrations);

    return 0;
}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
