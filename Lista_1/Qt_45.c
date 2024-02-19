/*Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para
decidir o numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o
saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor
disponíveis fossem distribuídas em número mínimo possível. Escreva um algoritmo que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o
critério da distribuição ótima.*/


#include  <stdio.h>

int main() {
   int valor, nota_50, nota_10, nota_5, nota_1; 
   
   printf("Digite o valor do saque: ");
   scanf("%d", &valor);
   
   nota_50 = valor / 50;                          
   valor %= 50;                                   
   
   nota_10 = valor / 10;                           
   valor %= 10;                                    
   
   nota_5 = valor / 5;                             
   valor = valor % 5;                              
   if (nota_5 > 0) {
      printf("\nForam entregues %d notas de R$5.\n", nota_5);
   }
   
   if (nota_10 > 0){
      printf("Foram entregues %d notas de R$10.\n", nota_10);
   }
   
   if ((nota_50 + nota_10) *  10 + nota_5 > 0) {//se a somatória for maior que zero é porque existem notas de R$1   
   if ((nota_50 + nota_10) * 10 + nota_5 > 0) {
      printf("Foram entregues %d notas de R$1.\n", (nota_50 + nota_10)*10 + nota_5);
   } else {
      printf("Nenhuma nota foi entregue.\n");
   }
   
   return 0;
}
}
   
   


