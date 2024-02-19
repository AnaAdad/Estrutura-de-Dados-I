//Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.

#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float media_ponderada;

    printf("Nota 1: ")
    scanf("%f", &nota1);
    
    printf("Peso da Nota 1: ");
    scanf("%f", &peso1);

    printf("\nNota 2: ");
    scanf("%f", &nota2);

    printf("Peso da Nota 2: ");
    scanf("%f", &peso2);

    printf("\nNota 3: ");
    scanf("%f", &nota3);

    printf("Peso da nota 3: ");
    scanf("%f", &peso3);    

    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("\nA Media Ponderada do Aluno e: %.2f\n", media_ponderada);

    return 0
}