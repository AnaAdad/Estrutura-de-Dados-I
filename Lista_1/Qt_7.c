//Leia 3 números, calcule e escreva a soma dos 2 primeiros e a diferença entre os 2 últimos.

#include <stdio.h>
int main() {
    int n1,n2,n3;
    
    printf("Digite o primeiro numero: "); scanf("%d", &n1);
    printf("\nDigite o segundo numero: "); scanf("%d", &n2);
    printf("\nDigite o terceiro numero: "); scanf("%d", &n3);
  
    int soma = n1 + n2;
    int dif = n3 - (n1+n2);
    
    printf("\nA soma de %d com %d eh %d.", n1, n2, soma);
    printf("\nA diferenca entre %d e %d eh %d.", n1+n2, n3, dif);
}