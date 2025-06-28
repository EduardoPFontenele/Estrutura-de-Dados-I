#include <stdio.h>
#include <stdlib.h>

int main() {

    float H = 0;
    int tamanho_serie;

    printf("Informe o tamanho da seriea H: ");
    scanf("%i",&tamanho_serie);

    for (float i = 1.0; i <= tamanho_serie; i++){
        H += (1/i);
    }

    printf("Resultado da serie = %f",H);
    return 0;

}