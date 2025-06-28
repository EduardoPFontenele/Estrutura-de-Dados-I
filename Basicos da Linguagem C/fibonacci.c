#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho_serie;
    int a = 0;
    int b = 1;


    printf("\nInforme o tamanho da serie de Fibonacci: ");
    scanf("%d",&tamanho_serie);

    if (tamanho_serie > 1){
        printf("%d\n",b);
    }

    for (int i = 1; i < tamanho_serie; i++){
        int proximo = a + b;
        printf("%d\n",proximo);

        a = b;
        b = proximo;

    }

    return 0;
}