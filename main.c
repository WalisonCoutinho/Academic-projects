#include <stdio.h>

int main(){
int n1,n2,n3,n4;
int media;
char aluno; 


printf("Insira o nome do aluno:");
scanf("%c", aluno);

printf("insira a 1 nota:");
scanf("%d", &n1);

printf("insira a 2 nota:");
scanf("%d", &n2);
    
printf("insira a 3 nota:");
scanf("%d", &n3);

printf("insira a 4 nota:");
scanf("%d", &n4);
    

media =((n1+n2+n3+n4)/4);

if (media >= 7){
    pritf("Aluno %2.d APROVADO com media%2.d\n", media, aluno);
}else{printf("AluNO %2.d REPROVADO media:%2.d\n", media, aluno);
}

return 0;

}