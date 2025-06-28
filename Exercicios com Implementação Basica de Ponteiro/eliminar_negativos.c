#include <stdio.h>

#define TAM 10

void preencher_vetor(int *p){

    for (int i = 0; i < TAM ; i++) {

        printf("\nInforme o numero respectivo da posição [%d]: ",i);
        scanf("%d",p);

        (p)++;
    }
    

}

int verificar_negativos(int *p,int *negativos) {

    for (int i = 0; i < TAM; i++) {

        if (*p < 0) {
            (*negativos)++;
        }

        p++;
    }

    return *negativos;
}

void preencher_vetorPositivo(int *p1, int *p2, int *negativos) {

    for (int i = 0; i < TAM ; i++) {

        if (*p1 >= 0){

            *p2 = *p1;
            p2++;

        }

        p1++;
    }
} 

int main() {

    int array[TAM];
    
    int  numeros_negativos = 0;

    preencher_vetor(&array[0]);
    verificar_negativos(&array[0],&numeros_negativos);

    int array_positivos[TAM - numeros_negativos];
    preencher_vetorPositivo(&array[0],&array_positivos[0],&numeros_negativos);

    for (int i = 0; i < TAM; i++) {
        printf("\nVETOR[%d] = %d\n",i,array[i]);
    }

    for (int i = 0; i < TAM - numeros_negativos; i++) {
        printf("\nVETOR POSITIVOS[%d] = %d\n",i,array_positivos[i]);
    }
    
    return 1;

}