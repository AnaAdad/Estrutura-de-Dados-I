/*Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele
fuma, o numero de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).*/

#include  <stdio.h>
int main() {
    int anos_fumado;
    int cigarro_por_dia;
    float preco_carteira;
    
    printf("\tQuantos anos que fuma: "); 
    scanf("%d", &anos_fumado);

    printf("Quantos cigarros fuma por dia: \n");
    scanf("%d", &cigarro_por_dia);

    printf("Qual o preco da sua carteira? R$ ");
    scanf("%f",&preco_carteira);

    int total_cigarros = anos_fumado *  365 + cigarro_por_dia; 
    float total_carteiras = (float)total_cigarros / 20;
    float valor_gasto = total_cigarros / preco_carteira ;

    printf ("\nO fumante gastou em %.d anos: R$ %.2f para comprar %d cigarros.\n",valor_gasto,total_cigarros, anos_fumado );

return 0;
}

    