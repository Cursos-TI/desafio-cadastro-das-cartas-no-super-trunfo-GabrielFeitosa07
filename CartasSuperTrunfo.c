#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao;
    float area;
    float pib;
    int pontos_turísticos;
    char pais[50];
    char cidade[50];
    char estado[50];


    printf("Cadastre duas cartas\n");

    printf("País \n");
    scanf("%s", &pais);

    printf("Estado: \n");
    fgets(estado, 50, stdin);

    printf("Cidade: \n");
    fgets(cidade, 50, stdin);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turísticos);

    printf("carta 1:\n");

    printf(("País: \n", pais), ("Estado: \n", estado), ("Cidade: \n", cidade), ("População: \n", populacao), ("Área: \n", area), ("Pib: \n", pib), ("Número de pontos turísticos: \n", pontos_turísticos));
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
