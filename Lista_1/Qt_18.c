//Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * p * r)

#include <stdio.h>

int  main() {
    float raio;
    
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);
    
    float comprimento = 2 * 3.14159 * raio;
    printf("\nO comprimento da circunferencia eh %.2f\n", comprimento);

    return 0
}