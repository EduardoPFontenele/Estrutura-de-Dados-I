#include <stdio.h>

#define TAM 10

void preencher_array(int *ponteiro) {

    for (int i = 0; i < TAM; i++) {

        printf("\nInforme o numero da posicao[%d]: ",i);
        scanf("%d",ponteiro);

        ponteiro++;
    }

}
int main() {

    int VETOR[TAM];
    //Ponteiro armazena o endereço da posicao 0 do VETOR
    int *p = &VETOR[0];

    preencher_array(p);

    // Percorrendo com array
    for (int i = 0; i < TAM; i ++) {
        printf("\nVETOR[%d] =\t %d", i,*p);
        p++;

    }

    return 1;
}