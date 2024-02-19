//Leia um número inteiro (3 dígitos), calcule e escreva a soma do número com seu inverso.(Ex.: número = 532 ; inverso = 235 ; soma = 532 + 235 = 767).

#include <stdio.h>
int main() {
   int numero, inverso, soma;
    printf("Digite um número de tres digitos: ");
    scanf("%d", &numero);
     if (numero < 100 || numero > 999) {
        printf("Numero invalido. Digite um  numero com tres digitos.\n");
     } else {
         inverso = (numero % 10) *  100 + ((numero / 10) % 10) * 10 + numero / 100;
         
         soma = numero + inverso

        printf("A soma do numero com seu inverso é: %d\n", soma);
     }
return 0;
}