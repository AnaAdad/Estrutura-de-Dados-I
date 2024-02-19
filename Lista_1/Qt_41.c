/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor
seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fábrica de um carro e
escreva o custo ao consumidor.*/

#include  <stdio.h>

int main(){
    //Declaração das variáveis
    float fabrica, custo_consumidor;
    float perct_distribuidor = 0.28;
    float imposto = 0.45;

    printf("Custo de fabrica do carro: ");
    scanf("%f", &fabrica);
    
    //Processamento da informação
    custo_consumidor = fabrica + (fabrica * perct_distribuidor) + (fabrica * imposto);

    //Saída de dados
    printf("\n\n");
	printf("O custo do carro ao consumidor é R$ %.2f", custo_consumidor);

    return  0;
}
    
  