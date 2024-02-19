//Leia 2 números, calcule e escreva a divisão da soma pela subtração dos números lidos.

#include <stdio.h>

int main(){ 
    int num1,num2;
    
    printf("Digite o primeiro numero: ");       
    scanf("%d",&num1);      
    printf("\n");    
    printf("Digite o segundo numero: ");             
    scanf("%d",&num2);   
    printf("\n\nA divisao da soma pelos numeros digitados eh: %.2lf",(double)(num1+num2)/(double)(num1-num2));
    printf("\n\nA divisao da soma pelos numeros digitados eh: %.2lf",(double)(num1+num2)/(num1-num2));    
}
