//Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2)

#include <stdio.h>

int main() {
    float base, altura;
    
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    
    printf("\nDigite a altura do triangulo: ");
    scanf("%f", &altura);
    
    printf("\nA area do triangulo eh: %.2f\n",(base*altura)/2);
}