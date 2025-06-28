#include <stdio.h>

#define TAM 7

void percorrer_memoria(int *ponteiro) {

    for (int i = 0; i < TAM; i ++) {

        printf("\nInforme o numero da posicão %d do vetor: ",i);
        scanf("%d",ponteiro);

        ponteiro++;

    }
}

void buscar_elementos(int *ponteiro, int *M1, int *M2) {
    
    *M1 = *ponteiro;
    *M2 = *ponteiro;

    for (int i = 0; i < TAM; i ++) {

        if (*M1 > *ponteiro) {
            *M1 = *ponteiro;
        }

        if (*M2 < *ponteiro) { 
            *M2 = *ponteiro;
        }

        ponteiro++;
    }


    printf("\nMAIOR VALOR = %d\n",*M2);
    printf("MENOR VALOR = %d\n", *M1);

}

int main() {

    int VETOR[TAM];
    int *p = &VETOR[0];

    percorrer_memoria(p);

    int menor_valor = VETOR[0];
    int maior_valor = VETOR[0];

    // Imprimindo valores do array
    for (int i = 0; i < TAM; i ++) {
        printf("\nVETOR[%d] =\t %d\n",i,*p);
        p++;
    }
    
    int *p2 = &VETOR[0];
    buscar_elementos(p2,&menor_valor,&maior_valor);


    return 1;

    
}