// Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)

#include <stdio.h>
int main() {
    float velocidade_ms, velocidade_kmh

    printf("Velocidade em m/s: ")
    scanf("%f", &velocidade_ms);
    velocidade_kmh = velocidade_ms * 3.6;

    printf("A velocidade em km/h é: %.2f\n", velocidade_kmh);
    return 0;
}