//Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).

#include <stdio.h>

int main(){ 
    int C, D, U;
    
    printf("Digite o valor da centena: ");      
    scanf("%d", &C);          
    
    printf("\nDigite o valor do decena: ");            
    scanf("%d", &D);                      
    
    printf("\nDigite o valor da unidade: ");                    
    scanf("%d", &U);    
    
    int Soma = C + D + U;         
    
    printf("\nA soma dos elementos do numero digitado eh %d.", Soma);    
     
    return 0;       
}