//Leia um número inteiro (3 dígitos), calcule e escreva a diferença entre o número e seu inverso.

#include  <stdio.h>
int main() {
    int num, reverso = 0, digito;
    
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);
    
    while(num != 0) {
        digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }
    
    printf("\nA diferenca entre o numero e seu inverso e: %d\n", abs(reverso - num));
   return 0;
}