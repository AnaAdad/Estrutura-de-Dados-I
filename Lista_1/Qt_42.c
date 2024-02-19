/*Escreva um algoritmo que, tendo como dados de entrada 2 pontos quaisquer no plano, ponto1 (x1,y1) eponto2 (x2,y2),
 escreva a distância entre eles, conforme fórmula abaixo, d=sqrt((x2-x1)^2+(y2-y1)^2).*/

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;
    
    printf("Insira as coordenadas do ponto 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("\nInsira as coordenadas do ponto 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calcula a distância entre os dois pontos usando a fórmula: sqrt((x2-x1)^2 + (y2-y1)^2)
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("\nA distância entre o ponto A(%lf,%lf) e o ponto B(%lf,%lf) é de %.4lf.", x1, y1, x2, y2, distancia);

    return  0;
}
