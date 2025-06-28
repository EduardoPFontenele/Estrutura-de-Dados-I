#include <stdio.h>

#define TAM 15

void preencher_array(int *p) {

    for (int i = 0; i < TAM; i++) {

        printf("\nInforme o valor respectivo da posição [%d]: ",i);
        scanf("%d",p);

        p++;
    }

}

void busca(int *p,int *valor_desejado) {

    int posicao = 0;
    int encontrado = 0;

    for (int i = 0; i < TAM; i ++) {

        if (*valor_desejado == *p ){

            posicao = i;
            encontrado = 1;
            printf("\nO valor %d encontra-se na posicao %d do vetor.\n",*valor_desejado,posicao);

        }

        p++;
    }

    if (encontrado == 0) {
        printf("\nO numero não está no vetor.\n");
    }
}


int main() {

    int array[TAM];
    int valor_desejado;

    preencher_array(&array[0]);

    printf("\nInforme o valor que deseja buscar no vetor: ");
    scanf("%d",&valor_desejado);

    busca(&array[0],&valor_desejado);

    return 1;

}