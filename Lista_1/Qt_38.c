//Leia 2 (duas) frações (numerador e denominador), calcule e escreva a soma destas frações, escrevendo o resultado em forma de fração.

#include  <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a%b);
}

void soma_fracao(int num_1, int den_1, int num_2, int den_2){
    int num_resultado, den_resultado;

    den_resultado  = den_1 * den_2;
    num_resultado = num_1 * den_2 + num_2 * den_1;

    num_resultado /= mdc(num_resultado, den_resultado);
    den_resultado /= mdc(num_resultado, den_resultado);

    printf("\nA soma dessas duas frações é: %dn/%d\n", num_resultado, den_resultado);
}
int main() {

    int num_1, den_1, num_2, den_2;

    printf("Informe o numerador e o denominador da 1 fração: ");
    scanf("%d %d", &num_1, &den_1);
    
    printf("\nInforme o numerador e o denominador da 2 fração: ");
    scanf("%d %d", &num_2, &den_2);

    soma_fracao(num_1, den_1, num_2, den_2);

    return 0;
}


    