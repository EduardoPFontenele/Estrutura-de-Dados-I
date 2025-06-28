#include <stdio.h>
#include <stdlib.h>

int main () {

    int numeros;
    int soma = 0;

    printf("Digite um numero (digite qualquer numero negativo para finalizar a operação): ");
    scanf("%d", &numeros);

    while (numeros >= 0) {
        
        soma += numeros;
        
        printf("Digite um numero (digite qualquer numero negativo para finalizar a operação): ");
        scanf("%d", &numeros);

    }

    printf("\nResultado da soma de todos os valores = %d\n",soma);

    return 0;
}

