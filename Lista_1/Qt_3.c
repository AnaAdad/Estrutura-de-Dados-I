//Leia um valor em minutos, calcule e escreva o equivalente em horas e minutos.

#include <stdio.h>
int main() {
    int minutos, horas, restantes;
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    
    /*Calculo de Horas*/
    horas = minutos / 60;
    restantes = minutos % 60;
        if (restantes < 10){
                printf("\n%d Minuto(s) e 0%d Hora(s)\n\n", restaves, horas);
            }else{
                printf("\n%d Minuto(s) e %d Hora(s)\n\n", restaves, horas);
            }
    return 0;
}
        
