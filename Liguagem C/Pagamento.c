// Faça um algoritmo que leia o valor de um produto e determine o valor que deve ser pago, conforme a escolha da forma de pagamento

 //pelo comprador e imprima na tela o valor final do produto a ser pago. Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo adequado.

 

 //Tabela de Código de Condições de Pagamento

 

 //1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 //2 - À Vista no cartão de crédito, recebe 10% de desconto

 //3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros

// 4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%

#include <stdio.h>

int main()
{
 
  float valor1;
  int opcoes;
  float formula1;
  float formula2;
  float formula4;
  
 
 
   printf("Insira o valor da compra:\n");
   scanf("%f", &valor1);
   
   printf("Escolha a forma de pagamento:\n");
   printf("(1)A vista e Pix com desconto de 15%%\n");
   printf("(2)A vista no cartão desconto de 10%%\n");
   printf("(3)Ate 2 parcelas no cartao sem desconto\n");
   printf("(4)Mais de 3 parcelas com acrescimo de 10%%\n");
   scanf("%d", &opcoes);
   
   formula1 = (valor1 - valor1 * 0.15);
   formula2 = (valor1 - valor1 * 0.10);
   formula4 = (valor1 + valor1 * 0.10);
   
   switch(opcoes){
       case 1:
       printf("Valor com desconto ficou:%.2f", formula1);
       break;
       
       case 2:
       printf("Valor com desconto ficou:%.2f", formula2);
       break;
       
       case 3:
       printf("O valor sem desconto:%.2f", valor1);
       break;
       
       case 4:
       printf("O valor com acrescimo:%.2f", formula4);
       
   }

    return 0;
}