//Leia 3 números, calcule e escreva a média dos números.

#include  <stdio.h>
int main(){ 
    int num1,num2,num3;
    float media;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);
    
    printf("\nDigite o terceiro numero: ");
    scanf("%d",&num3);
    
    media = (num1 + num2 + num3) / 3;
    
    printf("\nA media entre %d, %d e %d eh %.2f\n",num1,num2,num3,media);
   return(0); 
}

