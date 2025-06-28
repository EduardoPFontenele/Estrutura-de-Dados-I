#include <stdio.h>

#define TAM 6

void preencher_vetor(int *ponteiro) {

    for (int i = 0; i < TAM; i++) {

        printf("\nInforme o inteiro da posição [%d] do vetor: ",i);
        scanf("%d",ponteiro);

        ponteiro++;
    }


}

void preencher_vetorInverso(int *array_original, int *array_inverso) {

    for (int i = TAM - 1; i >= 0; i--) {

        array_original += TAM - 1;
        
        for (int i = 0; i < TAM; i ++) {

            *array_inverso = *array_original;
            array_original--;
            array_inverso++;
        }
    }

}

int main() {

    int VETOR[TAM];
    int VETOR2[TAM];

    int *p1 = &VETOR[0];
    preencher_vetor(p1);

    printf("\nVetor Normal:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d\n",VETOR[i]);
    }

    int *p2 = &VETOR[0];
    int *p3 = &VETOR2[0];

    preencher_vetorInverso(p2,p3);

    printf("\nVetor Inverso:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d\n",VETOR2[i]);
    }

    return 1;

}