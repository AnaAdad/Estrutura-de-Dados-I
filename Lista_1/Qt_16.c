//Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)

#include <stdio.h>
int main() {
    float l1, area;
    
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &l1);
    
    area = l1 * l1;
    printf("\nA área do quadrado é %f.", area);
    
    return 0;
}