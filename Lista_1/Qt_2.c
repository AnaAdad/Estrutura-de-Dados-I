//Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.

#include <stdio.h>
int main() {
    int hora, minuto;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &hora);
    printf("\nDigite a quantidade de minutos: ");
    scanf("%d", &minuto);
    
    if(minuto >= 60){
        hora += minuto / 60;
        minuto = minuto % 60;

        }
        
    printf("\nO tempo inserido equivale a %dh%dm\
    \nPortanto, o tempo convertido para minutos eh: %dmin.",
    hora, minuto, (hora*60)+minuto);

    return 0
    }