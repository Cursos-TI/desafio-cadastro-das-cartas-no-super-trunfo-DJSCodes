#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    //Gerar número aleatório
    srand(time(0));
    ataque1 = 1;
    ataque2 = 0;
    defesa1 = 0;
    defesa2 = 0;
    recuo1 = 0;
    recuo2 = 1;

    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolheu a opção Ataque!\n");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção Defesa!\n");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
    case 'R':
    case 'r':
        printf("Você escolheu a opção Recuo!\n");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;
    default:
        printf("Opção de jogo inválid!\n");
        break;
    }
    printf("Escolha o segundo tributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");

    printf("Escolha a comparação:");
    scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção Ataque!\n");
            resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Defesa!\n");
            resultado2 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu a opção Recuo\n");
            resultado2 = recuo1 > recuo2 ? 1 : 0;
        default:
            printf("Opção de jogo inválida\n");
            break;
        }
    }
    
}