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
        char estado1[50]; char estado2[50]; // Variável para armazenar o nome do estado
        char estado_inicial1[2]; char estado_inicial2[2]; // Variável para armazenar a inicial do estado
        char codigo_carta1[50]; char codigo_carta2[50]; // Variável para armazenar o código da carta (inicial do estado + número)
        char capital_cidade1[50]; char capital_cidade2[50]; // Variável para armazenar a capital da cidade
        float populacao1; float populacao2;// Variável para armazenar a população
        float area1; float area2; // Variável para armazenar a área
        float PIB1; float PIB2; // Variável para armazenar o PIB
        int pontos_turisticos1; int pontos_turisticos2; // Variável para armazenar o número de pontos turísticos

        printf("\n");
        printf("Bem-vindo ao Super Trunfo dos Estados Brasileiros!\n");
        printf("----------------------------------------------\n");
        printf("Vamos explicar as regras do jogo:\n");
        printf("\n");
        printf("1. Você irá escolher dois estados brasileiros para criar suas cartas de Super Trunfo.\n");
        printf("2. Para cada estado, você precisará fornecer informações como nome, inicial, código da carta, capital, população, área, PIB e número de pontos turísticos.\n");
        printf("3. Com base nessas informações, calcularemos o valor de Super Trunfo para cada carta.\n");
        printf("4. Em seguida, compararemos as cartas com base em diferentes atributos para determinar a vencedora.\n");
        printf("5. O jogador com a carta vencedora ganha pontos, e o objetivo é acumular o maior número de pontos possível.\n");
        printf("----------------------------------------------\n");

        printf("Vamos começar a criar as cartas!\n");
        printf("\n");
        printf("Primeira carta:\n");
        printf("*******************************************\n");
        printf("\n");

        

        printf("CARTA 1\n");
        printf("\n");
        printf("Digite o nome do Estado escolhido: ");
        scanf(" %49[^\n]", estado1);
        limparBuffer();

        printf("Digite a inicial do primeiro Estado escolhido: ");
        scanf("%c", &estado_inicial1);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta1);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf(" %49[^\n]", capital_cidade1);
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

        //Variáveis convertidas para cálculo mais preciso
        double populacao1_convertida = (populacao1 * 1000000.0f);
        double area1_convertida = (area1 * 1000.0f);
        double pib1_convertida = (PIB1 * 1000000000.0f);

        printf("Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Inicial do Estado: %s\n", estado_inicial1);
        printf("Carta: %s\n", codigo_carta1);
        printf("Cidade: %s\n", capital_cidade1);
        printf("População: %.2f milhões\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", PIB1);
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);

        //Calcular a Densidade Populacional
        float densidade_populacional1 = populacao1_convertida / area1_convertida; // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);

        //Calcular Pib per capito
        float pib_per_capito1 = pib1_convertida / populacao1_convertida;
        printf("PIB per capito: %.2f\n", pib_per_capito1);
        printf("\n");

         // SuperPoder Trunfo
        double SuperTrunfo1 = (populacao1_convertida + area1_convertida + pib1_convertida + pib_per_capito1 + pontos_turisticos1 + (1 / densidade_populacional1));
        printf("Valor Super Trunfo: %.2f \n", SuperTrunfo1);
         printf("\n");


        //Variáveis do Trunfo
        // CARTA 2

        printf("\n");
        printf("Segunda carta:\n");
        printf("*******************************************\n");
        printf("\n");
        printf("CARTA 2\n");
        printf("\n");

        printf("Digite o nome do Estado escolhido: ");
        scanf(" %49[^\n]", estado2);
        limparBuffer();

        printf("Digite a inicial do segundo Estado escolhido: ");
        scanf(" %c", &estado_inicial2);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta2);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf(" %49[^\n]", capital_cidade2);
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

        //Variáveis convertidas para cálculo mais preciso
        double populacao2_convertida = (populacao2 * 1000000.0f);
        double area2_convertida = (area2 * 1000.0f);
        double pib2_convertida = (PIB2 * 1000000000.0f);
        
        printf("Carta 2\n");
        printf("Estado: %s\n", estado2);
        printf("Inicial do Estado: %s\n", estado_inicial2);
        printf("Carta: %s\n", codigo_carta2);
        printf("Cidade: %s\n", capital_cidade2);
        printf("População: %.2f milhões\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", PIB2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);

        //Calcular a Densidade Populacional
        float densidade_populacional2 = populacao2_convertida / area2_convertida; // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);

        //Calcular Pib per capito
        float pib_per_capito2 = pib2_convertida / populacao2_convertida;
        printf("PIB per capito: %.2f\n", pib_per_capito2);
        printf("\n");
        
        // SuperPoder Trunfo
        double SuperTrunfo2 = (populacao2_convertida + area2_convertida + pib2_convertida + pib_per_capito2 + pontos_turisticos2 + (1 / densidade_populacional2));
        printf("Valor Super Trunfo: %.2f \n", SuperTrunfo2);
         printf("\n");

        //Fase da comparação de cartas no jogo - sem if e else

        printf("*** VAMOS SABER A CARTA VENCEDORA **** \n");
        printf("\n");

        int resultado_comparacao_cartaA = 0; // Variável para armazenar o resultado da comparação
        int resultado_comparacao_cartaB = 0; // Variável para armazenar o resultado da comparação

        printf("Comparando as cartas...\n");
        printf("\n");

        printf("Comparando a população das cartas...\n");
        if (populacao1_convertida > populacao2_convertida) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem a maior população: %.2f milhões.\n", estado1, populacao1_convertida / 1000000.0f);
        } else if (populacao1_convertida < populacao2_convertida) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem maior população: %.2f milhões.\n", estado2, populacao2_convertida / 1000000.0f   );
        } else {
                printf("Ambas as cartas têm a mesma população: %.2f milhões.\n", populacao1_convertida / 1000000.0f);
        }
        
        printf("\n");
        printf("Comparando a área das cartas...\n");
        if (area1_convertida > area2_convertida) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem maior área: %.2f km².\n", estado1, area1_convertida / 1000.0f);
        } else if (area1_convertida < area2_convertida) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem maior área: %.2f km².\n", estado2, area2_convertida / 1000.0f);
        } else {
                printf("Ambas as cartas têm a mesma área: %.2f km².\n", area1_convertida / 1000.0f);
        } 

        printf("\n");
        printf("Comparando o PIB das cartas...\n");
        if (pib1_convertida > pib2_convertida) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem maior PIB: R$ %.2f bilhões.\n", estado1, pib1_convertida / 1000000000.0f);
        } else if (pib1_convertida < pib2_convertida) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem maior PIB: R$ %.2f bilhões.\n", estado2, pib2_convertida / 1000000000.0f);
        } else {
                printf("Ambas as cartas têm o mesmo PIB: R$ %.2f bilhões.\n", pib1_convertida / 1000000000.0f);
        }

        printf("\n");
        printf("Comparando o PIB per capito das cartas...\n");
        if (pib_per_capito1 > pib_per_capito2) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem maior PIB per capito: R$ %.2f.\n", estado1, pib_per_capito1);
        } else if (pib_per_capito1 < pib_per_capito2) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem maior PIB per capito: R$ %.2f.\n", estado2, pib_per_capito2);
        } else {
                printf("Ambas as cartas têm o mesmo PIB per capito: R$ %.2f.\n", pib_per_capito1);
        }

        printf("\n");
        printf("Comparando o número de pontos turísticos das cartas...\n");
        if (pontos_turisticos1 > pontos_turisticos2) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem mais pontos turísticos: %d.\n", estado1, pontos_turisticos1);
        } else if (pontos_turisticos1 < pontos_turisticos2) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem mais pontos turísticos: %d.\n", estado2, pontos_turisticos2);
        } else {
                printf("Ambas as cartas têm o mesmo número de pontos turísticos: %d.\n", pontos_turisticos1);
        }

        printf("\n");
        printf("Comparando a densidade populacional das cartas...\n");
        if (densidade_populacional1 < densidade_populacional2) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem menor densidade populacional: %.2f habitantes/km².\n", estado1, densidade_populacional1);
        } else if (densidade_populacional1 > densidade_populacional2) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem menor densidade populacional: %.2f habitantes/km².\n", estado2, densidade_populacional2);
        } else {
                printf("Ambas as cartas têm a mesma densidade populacional: %.2f habitantes/km².\n", densidade_populacional1);
        }

        printf("\n");
        printf("Comparando o valor de Super Trunfo das cartas...\n");
        if (SuperTrunfo1 > SuperTrunfo2) {
                resultado_comparacao_cartaA++;
                printf("Carta %s venceu pois tem maior valor de Super Trunfo: %.2f.\n", estado1, SuperTrunfo1);
        } else if (SuperTrunfo1 < SuperTrunfo2) {
                resultado_comparacao_cartaB++;
                printf("Carta %s venceu pois tem maior valor de Super Trunfo: %.2f.\n", estado2, SuperTrunfo2);
        } else {
                printf("Ambas as cartas têm o mesmo valor de Super Trunfo: %.2f.\n", SuperTrunfo1);
        }

        printf("\n");
        printf("Calculado o resultado final da comparação das cartas...\n");
        printf("\n");
        printf("****** RESULTADO FINAL ******\n");
        printf("\n");
        if (resultado_comparacao_cartaA > resultado_comparacao_cartaB) {
                printf("Carta %s é a vencedora com %d pontos!\n", estado1, resultado_comparacao_cartaA);
        } else if (resultado_comparacao_cartaA < resultado_comparacao_cartaB) {
                printf("Carta %s é a vencedora com %d pontos!\n", estado2, resultado_comparacao_cartaB);
        } else {
                printf("Empate! Ambas as cartas têm o mesmo número de pontos: %d\n", resultado_comparacao_cartaA);
        }

        printf("\n");
        printf("Obrigado por jogar o Super Trunfo dos Estados Brasileiros!\n");


return 0;
}