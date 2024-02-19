//Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)

#include <stdio.h>

int main() {
    double temp_c, temp_f;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &temp_c);
    
    /*
        conversão de grau Fahrenheit para Celsius.
        A formula é: t°F = (9 * t°C +  160) / 5
                      t°C = (5 * t°F -  160) / 9
    */
   
    temp_f = (9 * temp_c + 160) /  5;
    
    printf("\nA temperatura %.2lf°C corresponde a %.2lf°F.\n", temp_c, temp_f);

    return 0
}