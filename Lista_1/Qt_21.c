//Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).

#include <stdio.h>

int main() {
    float F, C;
    
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    
    C = (5 * F - 160) / 9;
    
    printf("\nA temperatura %.2f graus Fahrenheit corresponde a %.2f graus Celsius.\n", F, C);

    return 0
}
