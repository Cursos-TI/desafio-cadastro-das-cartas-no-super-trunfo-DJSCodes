#include <stdio.h>

int main(){

    int idade = 17;
    float altura = 1.75;

    //idade >= 18 => Falso
    //idade <= 30 => Verdadeira
    //Falso && Verdadeira
    //Falso && altura > 1.70
    //Falso && Verdadeiro => Falso.

    if (idade>=18 && idade <= 30 && altura > 1.78) {
        printf("Você está na faixa etária etem altura adequada\n ");

    }  else {
        printf("Você não atende aos critérios\n");
    }

}