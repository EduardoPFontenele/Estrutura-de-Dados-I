#include <stdio.h>

#define TAM 8

void preencher_vetor(float *p) {

    for (int i = 0; i < TAM; i ++) {

        printf("\nDigite o numero respectivo da posição [%d]: ",i);
        scanf("%f",p);

        (p)++;
    }

}

float calcular_media(float *endereco,float *media, float *soma) {
    
    for (int i = 0; i < TAM; i++) {

        *soma += *endereco;
        endereco++;
    }

    *media = *soma / TAM;

    return *media, *soma;
    
}

int main () {

    float array[TAM];
    float *p = &array[0];
    float *p1 = &array[0];

    float media = 0.0f;
    float soma = 0.0f;

    preencher_vetor(p);
    calcular_media(p1,&media,&soma);

    for (int i = 0; i < TAM; i++) {
        printf("\nVETOR[%d] =\t%f",i,array[i]);
    }

    printf("\nMEDIA =\t%f\n",media);

    return 1;

}