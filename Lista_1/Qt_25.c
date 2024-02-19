//Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.

#include  <stdio.h>
int main() {
    int metro;
    
    printf("Digite a distancia em metros: ");
    scanf("%d", &metro);
    
    float km = metro / 1000;
    int restometro = metro % 1000;
    
    if (restometro == 0) {
        printf("\nA distancia %.2fkm.", km);
    } else {
        printf("\nA distancia %.2fkm e %.2fm.", km, restometro);
    }
    
    return 0;
}