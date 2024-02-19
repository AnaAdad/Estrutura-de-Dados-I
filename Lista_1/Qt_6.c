//Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)

#include <stdio.h>

int main() {
    double v_km_hora;
    
    printf("Digite a velocidade em quilometros por hora: ");
    scanf("%lf", &v_km_hora);

    double v_ms = v_km_hora / 3.6;

    printf("\nA velocidade em metros por segundo é de %.2f m/s.\n", v_ms);
}       