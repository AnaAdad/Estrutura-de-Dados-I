//Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele corresponde.

#include  <stdio.h>
int main() {
    int minutos, dias,  horas, min_restante;

    printf("Digite o numero de minutos: ");
    scanf("%d", &minutos);
    
    //Calculando a quantidade de dias
    dias = minutos / (24 * 60);
    horas = (minutos % (24  * 60)) / 60;                
    min_restante = minutos % 60;
  
    printf("\n%d minutos equivale a:\n\n%d dia(s)\n%d hora(s)\n%d minuto(s)\n", minutos, dias, horas, min_restante);

    return 0;
}