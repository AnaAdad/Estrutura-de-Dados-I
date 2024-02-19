/*Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um algoritmo que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada
pelo usuário.*/

#include  <stdio.h>

int main() {
    float  latao, cobre, zinco;
    
    printf("Informe a quantidade total em Kg do Latao: ");
    scanf("%f", &latao);
    
    cobre = latao * 0.70;
    zinco = latao * 0.30;
    
    printf("Para ter %.2f Kg de latao, é necessario:\n", latao)
    printf("A quantidade de Cobre eh: %.2f Kg\n", cobre);  
    printf("A quantidade de Zinco eh: %.2f Kg\n", zinco);
    
    return 0;
}