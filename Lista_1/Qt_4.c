//Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).

#include <stdio.h>
int main(){
    double dolar = 3.75;    
    double valor_dolar;
    printf("Digite o valor em dolar: ");
    scanf("%lf", &valor_dolar);
    double real = valor_dolar * dolar;
    printf("O valor de %g dolares é igual a R$ %.2f\n", valor_dolar, real);
    return 0;
}