#include <stdio.h>

int main(){

    int idade;
    float renda;
// if(condição1){
//     if(condição2)}

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal:");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60)
    {
       if (renda < 2000)
       { 
          printf("Você tem direito ao desconto!\n");
       }  else {
          printf("Você não tem direito ao desconto devido a renda!\n");
       }  

    }  else {
          printf("Você atende aos critérios devido a idade!\n");
    }
}