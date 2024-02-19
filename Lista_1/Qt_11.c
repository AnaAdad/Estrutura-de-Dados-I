//Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: número = 532 ; inverso = 235)

#include <stdio.h>

int  main() {
    int num, reverso=0;
    
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);
    
    while(num != 0){
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    
    printf("\nO inverso do numero %d eh %d\n", reverso);
}   