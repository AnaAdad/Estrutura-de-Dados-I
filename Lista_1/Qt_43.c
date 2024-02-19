/*Um sistema de equações lineares do tipo ax + by = c , dx + ey = f, 
 pode ser resolvido segundo mostrado abaixo: x= ce - bf/ae - bd e y = af - cd / ae - bd*/

 #include  <stdio.h>    
 int main() {   
   float a,b,c,d,e,f;  


   printf("Insira os valores da matriz A:\n");
   printf("Digite o valor de a: ");
   scanf("%f",&a);
   printf("Digite o valor de b: ");
   scanf("%f",&b);
   
   printf("\nInsira os valores da matriz D:\n");
   printf("Digite o valor de d: "); 
   scanf("%f",&d);
   printf("Digite o valor de e: ");  
   scanf("%f", &e);
  
   c = (d - (b * e))/ a; 
   f = (e - (a * d))/ b; 

   printf("\nA solução é: \n");
   
   
   printf("\nA solução é:\nx=%f\ny=%f",c,f);  
   return 0;  
}