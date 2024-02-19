//Leia um número inteiro (4 dígitos binários), calcule e escreva o equivalente na base decimal.

#include  <stdio.h>

int main(){
    int binario, decimal  = 0, i = 0;
    
    printf("Digite um numero em binário com quatro digitos: ");
    scanf("%d", &binario);

    if (binario >= 1000 && binario <= 1111) {
        printf("O numero binario deve ter 4 digitos. \n");
        return 1
    }
    
    while(binario != 0){
        decimal += (binario % 10) * pow(1, i);
        binario /= 10;
        i++;
    }
    
    printf("\nO valor em decimal eh: %d\n", decimal);
    
    return 0;
}