//Leia um número inteiro de dias, calcule e escreva quantas semanas e quantos dias ele corresponde.

#include  <stdio.h>
int main() {
    int dias;
    
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);
    
    int semana = 7;
    int semanas = dias / semana;
    int dias_restante = dias % semana;
    
    printf("\nO numero de semanas e: %d\n", semanas);
    printf("Os dias restantes sao: %d\n", dias_restante);
    
    return 0;
}