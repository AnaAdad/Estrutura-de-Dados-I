//*Leia um valor em kg (quilograma), calcule e escreva o equivalente em g (grama).*//

#include <stdio.h>
int main() {
    double kg, g;
    
    printf("Digite o peso em quilogramas: ");
    scanf("%lf", &kg);
    
    /*Conversão de kilogramas para gramas*/
    g = kg * 1000;
    
    printf("\nO peso %.2lf quilogramas corresponde a %d grama.\n", kg, (int)g);
    
    return 0;
}