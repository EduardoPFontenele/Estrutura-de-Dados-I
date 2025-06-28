#include <stdio.h>
#include <stdlib.h>


int main(){

    float numeros = 0.0;
    float soma = 0.0;
    int contador = 0;
    float media;

    printf("Digite um numero (digite um numero negativo caso queira finalizar a operação): ");
    scanf("%f",&numeros);
    
    while (numeros > 0 || numeros == 0 ) {
        soma += numeros;
        contador += 1;
    
    printf("Digite um numero (digite um numero negativo caso queira finalizar a operação): ");
    scanf("%f",&numeros);

    }   
    
    media = (soma / contador);
    printf("\nMédia final = %f\n",media);

    return 0;

}