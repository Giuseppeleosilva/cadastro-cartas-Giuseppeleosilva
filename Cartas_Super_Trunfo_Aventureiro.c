#include <stdio.h>
#include <locale.h>
#include <string.h>

void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

        //Variáveis do Trunfo
        // CARTA 1
        char estado1[1]; // Variável para armazenar o nome do estado
        char codigo_carta1[50]; // Variável para armazenar o código da carta (inicial do estado + número)
        char capital_cidade1[50]; // Variável para armazenar a capital da cidade
        float populacao1; // Variável para armazenar a população
        float area1; // Variável para armazenar a área
        float PIB1; // Variável para armazenar o PIB
        int pontos_turisticos1; // Variável para armazenar o número de pontos turísticos

        printf("Bem vindo ao Super Trunfo de Cidades! \n");

        printf("Digite a inicial do Estado escolhido: ");
        scanf("%s", estado1);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta1);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf("%s", capital_cidade1);
        limparBuffer();

        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao1);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%f", &area1);
        limparBuffer();

        printf("Digite o PIB (em Bilhões): ");
        scanf("%f", &PIB1);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);
        limparBuffer();

        printf("\n");
        
        printf("Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Carta: %s\n", codigo_carta1);
        printf("Cidade: %s\n", capital_cidade1);
        printf("População: %.2f milhões\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", PIB1);
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);

        //Calcular a Densidade Populacional
        float densidade_populacional1 = (populacao1 * 1000000.0f) / (area1 * 1000.0f); // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

        //Calcular Pib per capito
        float pib_per_capito1 = (PIB1 * 1000000000.0f) / (populacao1 * 1000000.0f);
        printf("PIB per capito: %.2f\n", pib_per_capito1);
        printf("\n");


        //Variáveis do Trunfo
        // CARTA 2
        char estado2[1]; // Variável para armazenar o nome do estado
        char codigo_carta2[50]; // Variável para armazenar o código da carta (inicial do estado + número)
        char capital_cidade2[50]; // Variável para armazenar a capital da cidade
        float populacao2; // Variável para armazenar a população
        float area2; // Variável para armazenar a área
        float PIB2; // Variável para armazenar o PIB
        int pontos_turisticos2; // Variável para armazenar o número de pontos turísticos

        printf("Digite a inicial do segundo Estado escolhido: ");
        scanf("%s", estado2);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta2);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf("%s", capital_cidade2);
        limparBuffer();

        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao2);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%f", &area2);
        limparBuffer();

        printf("Digite o PIB (em Bilhões): ");
        scanf("%f", &PIB2);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);
        limparBuffer();

        printf("\n");
        
        printf("Carta 2\n");
        printf("Estado: %s\n", estado2);
        printf("Carta: %s\n", codigo_carta2);
        printf("Cidade: %s\n", capital_cidade2);
        printf("População: %.2f milhões\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", PIB2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);

        //Calcular a Densidade Populacional
        float densidade_populacional2 = (populacao2 * 1000000.0f) / (area2 * 1000.0f); // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);

        //Calcular Pib per capito
        float pib_per_capito2 = (PIB2 * 1000000000.0f) / (populacao2 * 1000000.0f);
        printf("PIB per capito: %.2f\n", pib_per_capito2);
        printf("\n");
        
        printf("O jogo irá continuar...");
return 0;
}