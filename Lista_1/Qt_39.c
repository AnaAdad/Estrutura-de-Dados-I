/*Leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: D=R + S /2,
 onde R =(A+B)ao quadrado e S=(B+C) ao  quadrado.*/

#include <stdio.h>
int main() {
    int A,  B, C;
    int R, S, D;

    printf("Digite 3 numeros inteiros(A,B,C):  ");
    scanf("%d %d %d", &A, &B, &C);
   
   R = (A + B) * (A + B);
   S = (B + C) * (B + C);   
   D = (R +  S) / 2;

   printf("O valor de D é: %d\n",D);

   return 0;
}
