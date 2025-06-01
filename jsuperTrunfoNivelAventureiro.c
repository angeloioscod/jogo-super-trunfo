#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Biblioteca para funções de caracteres (não usada diretamente, mas útil para expansões)

// Desafio: nível aventureiro
// Interatividade no Super Trunfo
/*
Adicionei lógica mais complexa ao jogo Super Trunfo. 
Usei menu interativo usando switch para que o jogador possa escolher o atributo 
de comparação entre duas cartas de países.
usei estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação
*/
// Ângelo Oliveira dos Santos - Faculdade Estacio - Curso Análise e desenvolvimento de Sistemas


// Definindo a estrutura da carta para organizar todos os atributos
typedef struct {
    char nome[50];              // Nome do país/cidade
    char estado[3];             // Sigla do estado (caso seja cidade)
    char codigo[5];             // Código único da carta
    unsigned long populacao;    // População em habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões de unidades monetárias
    int pontos_turisticos;      // Número de pontos turísticos
    float densidade;            // Densidade demográfica (hab/km²)
} Carta;

// Função para limpar o buffer de entrada (evita problemas com entradas inválidas)
void limparBuffer() {
    while (getchar() != '\n');  // Lê todos os caracteres até encontrar uma quebra de linha
}

// Função para exibir todos os dados de uma carta
void exibirCarta(Carta c) {
    printf("\n--- Dados da Carta ---\n");
    printf("País/Estado: %s (%s)\n", c.nome, c.estado);
    printf("Código: %s\n", c.codigo);
    printf("População: %lu habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km²\n\n", c.densidade);
}

int main() {
    // ========================================================
    // INICIALIZAÇÃO DAS CARTAS
    // ========================================================
    // Criação e preenchimento da primeira carta
    Carta carta1 = {
        "São Paulo",        // Nome
        "SP",               // Estado
        "SP01",             // Código
        12325000,           // População (12.325.000 habitantes)
        1521.11,            // Área (1521.11 km²)
        699.28,             // PIB (699.28 bilhões)
        30,                 // Pontos turísticos
        0                   // Densidade (será calculada)
    };
    // Cálculo da densidade demográfica: população dividida pela área
    carta1.densidade = (float)carta1.populacao / carta1.area;

    // Criação e preenchimento da segunda carta
    Carta carta2 = {
        "Rio de Janeiro",   // Nome
        "RJ",               // Estado
        "RJ02",             // Código
        6718903,            // População (6.718.903 habitantes)
        1200.33,            // Área (1200.33 km²)
        365.30,             // PIB (365.30 bilhões)
        30,                 // Pontos turísticos
        0                   // Densidade (será calculada)
    };
    // Cálculo da densidade demográfica
    carta2.densidade = (float)carta2.populacao / carta2.area;

    int opcao;  // Variável para armazenar a escolha do usuário no menu
    
    // ========================================================
    // LOOP PRINCIPAL DO PROGRAMA (MENU INTERATIVO)
    // ========================================================
    do {
        // Exibe o menu de opções
        printf("\n=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
        printf("[1] Comparar por População\n");
        printf("[2] Comparar por Área\n");
        printf("[3] Comparar por PIB\n");
        printf("[4] Comparar por Pontos Turísticos\n");
        printf("[5] Comparar por Densidade Demográfica\n");
        printf("[6] Exibir dados das cartas\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        
        // Verifica se a entrada é um número válido
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Digite um número.\n");
            limparBuffer();  // Limpa o buffer para evitar loops infinitos
            continue;        // Volta ao início do loop
        }

        // ========================================================
        // PROCESSAMENTO DA OPÇÃO ESCOLHIDA PELO USUÁRIO
        // ========================================================
        switch(opcao) {
            case 1: // Comparação por população
                printf("\nComparando por POPULAÇÃO (maior vence):\n");
                printf("%s: %lu habitantes\n", carta1.nome, carta1.populacao);
                printf("%s: %lu habitantes\n", carta2.nome, carta2.populacao);
                
                // Lógica de comparação (maior população vence)
                if (carta1.populacao > carta2.populacao) {
                    printf("Vencedor: %s!\n", carta1.nome);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("Vencedor: %s!\n", carta2.nome);
                } else {
                    printf("Empate!\n");
                }
                break;
                
            case 2: // Comparação por área
                printf("\nComparando por ÁREA (maior vence):\n");
                printf("%s: %.2f km²\n", carta1.nome, carta1.area);
                printf("%s: %.2f km²\n", carta2.nome, carta2.area);
                
                // Lógica de comparação (maior área vence)
                if (carta1.area > carta2.area) {
                    printf("Vencedor: %s!\n", carta1.nome);
                } else if (carta2.area > carta1.area) {
                    printf("Vencedor: %s!\n", carta2.nome);
                } else {
                    printf("Empate!\n");
                }
                break;
                
            case 3: // Comparação por PIB
                printf("\nComparando por PIB (maior vence):\n");
                printf("%s: %.2f bilhões\n", carta1.nome, carta1.pib);
                printf("%s: %.2f bilhões\n", carta2.nome, carta2.pib);
                
                // Lógica de comparação (maior PIB vence)
                if (carta1.pib > carta2.pib) {
                    printf("Vencedor: %s!\n", carta1.nome);
                } else if (carta2.pib > carta1.pib) {
                    printf("Vencedor: %s!\n", carta2.nome);
                } else {
                    printf("Empate!\n");
                }
                break;
                
            case 4: // Comparação por pontos turísticos
                printf("\nComparando por PONTOS TURÍSTICOS (maior vence):\n");
                printf("%s: %d pontos\n", carta1.nome, carta1.pontos_turisticos);
                printf("%s: %d pontos\n", carta2.nome, carta2.pontos_turisticos);
                
                // Lógica de comparação (maior número de pontos turísticos vence)
                if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                    printf("Vencedor: %s!\n", carta1.nome);
                } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                    printf("Vencedor: %s!\n", carta2.nome);
                } else {
                    printf("Empate!\n");
                }
                break;
                
            case 5: // Comparação por densidade demográfica
                // REGRA ESPECIAL: menor densidade vence
                printf("\nComparando por DENSIDADE DEMOGRÁFICA (menor vence):\n");
                printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
                printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
                
                // Lógica de comparação invertida (menor valor vence)
                if (carta1.densidade < carta2.densidade) {
                    printf("Vencedor: %s!\n", carta1.nome);
                } else if (carta2.densidade < carta1.densidade) {
                    printf("Vencedor: %s!\n", carta2.nome);
                } else {
                    printf("Empate!\n");
                }
                break;
                
            case 6: // Exibição completa das cartas
                printf("\nCartas disponíveis:\n");
                exibirCarta(carta1);
                exibirCarta(carta2);
                break;
                
            case 0: // Saída do programa
                printf("Saindo do jogo...\n");
                break;
                
            default:  // Tratamento de opções inválidas
                printf("Opção inválida! Tente novamente.\n");
        }
        
    } while (opcao != 0);  // O loop continua até o usuário escolher sair (opção 0)

    return 0;  // Fim do programa
}