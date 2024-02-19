//Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)

#include <stdio.h>
int main() {
    float base, altura;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    printf("\nDigite a altura do retangulo: ");
    scanf("%f", &altura);
    
    printf("\nA area do retangulo e %0.2f\n", base * altura);

    return 0;
}