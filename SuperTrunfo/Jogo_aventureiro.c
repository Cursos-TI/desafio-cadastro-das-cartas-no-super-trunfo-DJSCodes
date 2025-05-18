#include <stdio.h>
#include <string.h>

// Estrutura de uma carta do jogo
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para comparar dois valores e retornar resultado
void compararCartas(Carta c1, Carta c2, int opcao) {
    printf("\n--- Comparação de Cartas ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", c1.nome, c1.populacao);
            printf("%s: %d habitantes\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.populacao > c1.populacao) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", c1.nome, c1.area);
            printf("%s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.area > c1.area) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", c1.nome, c1.pib);
            printf("%s: %.2f trilhões\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pib > c1.pib) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", c1.nome, c1.pontosTuristicos);
            printf("%s: %d pontos\n", c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.pontosTuristicos > c1.pontosTuristicos) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", c1.nome, c1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", c2.nome, c2.densidadeDemografica);
            if (c1.densidadeDemografica < c2.densidadeDemografica) {
                printf("Vencedor: %s\n", c1.nome);
            } else if (c2.densidadeDemografica < c1.densidadeDemografica) {
                printf("Vencedor: %s\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }
}

int main() {
    // Exemplo de duas cartas cadastradas
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 1.84, 25, 25.0};
    Carta carta2 = {"Japão", 125800000, 377975.0, 5.15, 30, 333.0};

    int escolha;

    printf("Bem-vindo ao Super Trunfo de Países!\n");
    printf("Compare duas cartas e veja quem vence.\n\n");

    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (vence o MENOR valor)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    compararCartas(carta1, carta2, escolha);

    return 0;
}
