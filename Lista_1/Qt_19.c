//Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * p * r3) / 3) (p = 3,14)

#include <stdio.h>
#define PI 3.14159

int main() {
    float r, v;
    
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);
    
    v = (4 * PI * PI * r)/3;
    
    printf("\nO volume da esfera eh %.2f\n", v);
}