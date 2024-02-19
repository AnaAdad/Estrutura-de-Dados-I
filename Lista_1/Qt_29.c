//Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.

#include  <stdio.h>
int main() {
    int mes;
    
    printf("Digite o numero de meses: ");
    scanf("%d", &mes);
    
    int ano = mes / 12;
    int mes_restante = mes % 12;
    
    printf("O numero de anos eh: %d\n", ano);
    printf("Os meses restantes sao: %d\n", mes_restante);
    
    return 0;
}                