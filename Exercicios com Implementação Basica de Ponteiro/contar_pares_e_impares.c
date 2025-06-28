#include <stdio.h>

#define TAM 10


void preencher_array(int *p) {

    for (int i = 0; i < TAM; i ++) {

        printf("\nInforme o valor da posição [%d]: ",i);
        scanf("%d",p);

        p++;
    }
}

void verificacao_elementos(int *p1, int *p2, int *array) {

    for (int i = 0; i < TAM; i++) {

        if (*array % 2 == 0) {
            (*p1)++;
        }

        else {
            (*p2)++;
        }

        array++;
    }

}


int main() {

    int array[TAM];
    int *p = &array[0];

    int pares = 0;
    int impares = 0;

    
    preencher_array(p);
    
    for (int i = 0; i < TAM; i ++){
        printf("\nVETOR[%d] =\t%d\n",i,array[i]);
    }
    
    int *p2 = &array[0];
    verificacao_elementos(&pares,&impares,p2);
    printf("\nQuantidade de Pares = %d\n",pares);
    printf("Quantidade de Ímpares = %d\n",impares);

    return 1;


}