
// Faça um algoritmo que leia uma temperatura em Fahrenheit e calcule a temperatura correspondente em grau Celsius. Imprima na tela as duas temperaturas.
#include <stdio.h>
int main(){

float tempf;
float tempc;
printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &tempf);


  tempc = ((tempf - 32) * 5 / 9); 

 printf("A temperatura de %.2f convertido para celcius e: %.2f", tempf, tempc);
    return 0;
}