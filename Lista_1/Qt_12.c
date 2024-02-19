//Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.

#include <stdio.h>

int  main() {
    double salario, novosalario;
    
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    
    novosalario = salario + (salario * 0.25);
    
    printf("O novo salário é: %.2f", novosalario);
}