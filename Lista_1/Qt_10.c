//Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

#include <stdio.h>

int main(){
    int num1,num2;
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);
    
    if(num2 == 0){
        printf("Impossivel dividir por zero");
    }else{
        int quoc = num1 / num2;
        int rest = num1 % num2;
        
        printf("\nO quociente de %.d divido por %.d eh igual a: %d",num1,num2,quoc);
        printf("\nO resto de %.d divido por %.d eh igual a: %d\n",num1,num2,rest);
    }
    
    return 0;
}
