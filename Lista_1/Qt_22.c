//Leia um valor em km, calcule e escreva o equivalente em m.

#include <stdio.h>

int main(){
    double km, m;
    
    printf("Digite os quilometros: ");
    scanf("%lf", &km);
    
    m = km * 1000;
    
    printf("\n%.2lf Kilometros equivale a %.2lf Metros.\n", km, m);
    
    return 0;
}