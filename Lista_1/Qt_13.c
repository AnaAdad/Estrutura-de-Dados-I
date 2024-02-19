//Leia um valor em real (R$), calcule e escreva 70% deste valor.

#include <stdio.h>

int main(){
    double dinheiro, porcentagem;
    
    printf("Digite o valor em reais: R$");
    scanf("%lf", &dinheiro);
    
    porcentagem = dinheiro * 0.70;
    
    printf("\nO valor de %lf em 70%% é igual a R$: %.2f\n", dinheiro, porcentagem);
    
    return 0;

}