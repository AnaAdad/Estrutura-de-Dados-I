//Leia um número inteiro (4 dígitos), calcule e escreva a soma dos elementos que o compõem. Ex.:número = 9534 ; soma = 9+5+3+4 = 21.

#include  "stdio.h"

int  main() {
    int numero, soma;

    printf("Digite um numero de quatro digito: ");
    scanf("%d", &numero);

    soma += numero % 10;
    numero /= 10;
    soma +=  numero % 10;
    numero /= 10;
    soma += numero %  10;
    numero /= 10;
    soma  += numero;

    printf("A soma  dos digitos e: %d\n",soma);
    
    return 0;
}
