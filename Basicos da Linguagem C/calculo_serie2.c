#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanho_serie;
    float serie = 0;

    printf("\nInforme o tamanho da serie: ");
    scanf("%d",&tamanho_serie);

    float numerador = 1;
    float denominador = tamanho_serie;

    while (numerador <= tamanho_serie){
        serie += (numerador/denominador);

        numerador++;
        denominador--;

    }

    printf("S = %f\n",serie);
    return 0;

}