#include <stdio.h>
#include <locale.h>
#include <string.h>

void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
        char estado1[20]; // Variável para armazenar o nome do estado
        char codigo_carta1[20]; // Variável para armazenar o código da carta (inicial do estado + número)
        float populacao1; // Variável para armazenar a população
        int area1; // Variável para armazenar a área
        float PIB1; // Variável para armazenar o PIB
        int pontos_turisticos1; // Variável para armazenar o número de pontos turísticos

        printf("Bem vindo ao Super Trunfo de Cidades! \n");

        printf("Digite o nome do estado: ");
        scanf("%s", estado1);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta1);
        limparBuffer();

        printf("Digite a população: ");
        scanf("%f", &populacao1);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%d", &area1);
        limparBuffer();

        printf("Digite o PIB: ");
        scanf("%f", &PIB1);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);
        limparBuffer();

        printf("\n");

        printf("Carta: %s - %s\n", estado1, codigo_carta1);
        printf("População: %.2f milhões\n", populacao1);
        printf("Área: %d km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", PIB1);
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);

        printf("\n");

        char estado2[20]; // Variável para armazenar o nome do estado
        char codigo_carta2[20]; // Variável para armazenar o código da carta (inicial do estado + número)
        float populacao2; // Variável para armazenar a população
        int area2; // Variável para armazenar a área
        float PIB2; // Variável para armazenar o PIB
        int pontos_turisticos2; // Variável para armazenar o número de pontos turísticos

        printf("Bem vindo ao Super Trunfo de Cidades! \n");
        printf("Digite o nome do estado: ");
        scanf("%s", estado2);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta2);
        limparBuffer();

        printf("Digite a população: ");
        scanf("%f", &populacao2);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%d", &area2);
        limparBuffer();

        printf("Digite o PIB: ");
        scanf("%f", &PIB2);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);
        limparBuffer();

        printf("\n");

        printf("Carta: %s - %s\n", estado2, codigo_carta2);
        printf("População: %.2f milhões\n", populacao2);
        printf("Área: %d km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", PIB2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("\n");

        printf("Comparação entre as cartas:\n");
        printf("\n");
        printf("População: %s tem %.2f milhões de habitantes, enquanto %s tem %.2f milhões de habitantes.\n", estado1, populacao1, estado2, populacao2);
        printf("\n");
        printf("Área: %s tem %d km², enquanto %s tem %d km².\n", estado1, area1, estado2, area2);
        printf("\n");
        printf("PIB: %s tem um PIB de R$ %.2f bilhões, enquanto %s tem um PIB de R$ %.2f bilhões.\n", estado1, PIB1, estado2, PIB2);
        printf("\n");
        printf("Pontos Turísticos: %s tem %d pontos turísticos, enquanto %s tem %d pontos turísticos.\n", estado1, pontos_turisticos1, estado2, pontos_turisticos2);
        printf("\n");   
        
        printf("O jogo Super Trunfo de Cidades vai continuar...\n");
        return 0;
}
