//Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.

#include  <stdio.h>
int main() {
    int dias;
    
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);
    
    int anos = dias / 365;
    int mes = (dias % 365) / 30;
    int dia = (dias % 30);
    
    if(anos == 1)
        printf("\n%d ano\n", anos);
    else
        printf("\n%d anos\n", anos);
        
    if(mes == 1)
        printf("%d mês\n", mes);
    else
        printf("%d meses\n", mes);
        
    if(dia == 1)
        printf(" e %d dia", dia);
    else
        printf(" e %d dias", dia);
        
    return 0;
}