#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor:\n");
    scanf("%d", &variavel);
    
        switch (variavel) {
        case 1:
            printf("Codigo a ser executado se variavel == 1\n");
            printf("Teste do case 1");
        break;
        case 2: 
            printf("codigo a ser executado se variavel1 = 2\n");
        default:
        break;
           printf("Codigo a ser executado se a variavel nao for 11 ou 2\n");
        }
}