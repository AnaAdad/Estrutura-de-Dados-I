//Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.

#include  <stdio.h>
int main() {
    int dia, mes, ano;
    
    printf("Insira o dia: ");
    scanf("%d", &dia);
    
    printf("Insira o mês : ");
    scanf("%d", &mes);
    
    printf("Insira o ano: ");
    scanf("%d", &ano);
    

    idade_em_dias = ano * 365 + mes * 30 + dia;
    printf("A idade em dias dessa pessoa é de %d dias.\n",idade_em_dias);
    
    return 0;
}