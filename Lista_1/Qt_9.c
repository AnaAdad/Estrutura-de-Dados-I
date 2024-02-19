//Leia 2 números (A, B) e escreva-os em ordem inversa (B, A).

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("\nOs numeros digitados foram %d e %d.\n\n", b, a);
    
    return 0;
}