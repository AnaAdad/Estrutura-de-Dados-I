//Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele corresponde.

#include <stdio.h>
int main() {
    int horas, semanas, dias, horas_restantes;  
    
    printf("Digite o numero de horas: ");
    scanf("%d", &horas);
    
    semanas = horas / 168;
    dias = (horas % 168) / 24;
    horas_restantes = ((horas % 168) % 24);
    
    printf("\n%d Horas equivalem a:\n%d Semana(s)\n%d Dia(s)\n%d Hora(s)", horas, semanas, dias, horas_restantes);
    
    return  0;
}
   