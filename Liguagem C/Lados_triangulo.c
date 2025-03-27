#include <stdio.h>
#include <stdio.h>

int main(){

    int ladoAB;
    int ladoBC;
    int ladoCA;

printf("insira o valor do lado AB:");
    scanf("%d" ,&ladoAB);
printf("insira o valor do lado BC:");
    scanf("%d" ,&ladoBC);
printf("insira o valor do lado AC:");
    scanf("%d" ,&ladoCA);

    
    if (ladoAB == ladoCA && ladoAB == ladoBC && ladoBC == ladoCA){
        printf("Triangulo e equilatero");
}        else{}
   
    
    if(ladoAB != ladoCA && ladoAB != ladoBC && ladoBC != ladoCA){
        printf("Triangulo escaleno");  
}        else{
        printf("Triangulo esosciles");

}




    return 0;
}