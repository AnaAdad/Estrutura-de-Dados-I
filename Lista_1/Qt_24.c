//Leia um valor em m, calcule e escreva o equivalente em cm.

#include <stdio.h>

int main() {
    float m = 0;
    printf("Digite um valor em metros: ");
    scanf("%f", &m);
    

    
    int cm = (int)(m * 100 + .5);
    if (cm == (m * 100)) {
        printf("O %.2f metro(s) corresponde exatamente a %d centímetros.\n", m, cm);
    } else {
        printf("O %.2f metro(s) corresponde aproximadamente a %d centímetros.\n", m, cm);
    }
    
    return 0;
}