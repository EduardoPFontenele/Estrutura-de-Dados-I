#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcular_serie(int tamanho,float s) {
    
    for (int i = 1;i <= tamanho;i++) {

        int base = 2 + i;

        if (i % 2 != 0) {
            s -= (1 / pow(base,3));
        }

        else {
            s += - (1 / pow(base,3));
        }
    }

    return s;
}

int main() {

    float serie = 1;
    int tamanho_serie;

    printf("\nInforme o tamanho da serie para calcular o valor de pi: ");
    scanf("%d",&tamanho_serie);

    if (tamanho_serie < 1 || tamanho_serie > 20) {
        printf("\nInforme um tamanho de {1 - 20}\n");
    }
    
    else {
        int resultado_serie = calcular_serie(tamanho_serie,serie);
        int parte_dentro = serie * 32;

        float pi = pow(parte_dentro,0.33333333);
        printf("Valor de pi = %f\n",pi);
        
    }

    return 0;
}