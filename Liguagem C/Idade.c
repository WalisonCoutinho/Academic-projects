
//Faça algoritmo que leia o nome e a idade de uma peso e imprima na tela o nome da pessoa e se ela é maior ou menor de idade. 
#include <stdio.h>

int main(){

char nome;
int idade;

printf("Insira ser nome:\n");
scanf("%s", &nome);

printf("insira sua idade:");
scanf("%d", &idade);

if(idade >= 18 ){

    printf("%.s Maior de idade");
}else{
    printf("%.s Menor de idade");
}


    
    return 0;
}