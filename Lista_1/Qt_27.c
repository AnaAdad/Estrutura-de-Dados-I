//Leia um número inteiro de segundos, calcule e escreva quantas horas, quantos minutos e quantos segundos ele corresponde.

#include <stdio.h>
int main() {
    int seg, horas, min, seg_restante;
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &seg);
    
    /* Conversao de Tempo */
    horas = seg / 3600;
    seg %= 3600;
    min = seg / 60;
    seg_restante = seg % 60;
    
    /* Mostrando o tempo em horas, minutos e segundos */
    printf("\n%dh %dm %ds\n", horas, min, seg_restante);
    
    return 0;
}
   