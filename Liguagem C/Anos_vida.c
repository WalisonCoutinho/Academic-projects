//15 - Faça um algoritmo que leia o ano em que uma pessoa nasceu, imprima na tela quantos anos, meses e dias essa pessoa ja viveu. Leve em 

//consideração o ano com 365 dias e o mês com 30 dias.

//(Ex: 5 anos, 2 meses e 15 dias de vida)

#include <stdio.h>
int main(){

    int idade;
    int meses;
    int dias;

    printf("Insira sua idade:");
    scanf("%d", &idade);

   meses = (idade * 12);
   dias = (idade * 365);

   printf("%.d, %.d, %.d", idade, meses, dias);
    
    
    
    return 0;
}