#include <stdio.h>
#include <stdlib.h>


float media_alturas(float lista[6], float soma) {
    
    for (int i = 0; i < 6; i++) {
        soma += lista[i];

    }

    //Calculando media das alturas
    float media = soma / 6;

    return media;
}

float maior_altura(float lista[6]) {

    float maior = lista[0];
    
    for (int i = 0; i < 6; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
    }

    return maior;

}

float menor_altura(float lista[6]) {

    float menor = lista[0];

    for (int i = 0; i < 6; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
        }
    }

    return menor;

}

int main() {

    float alturas[6];
    float soma = 0;

    //Percorrendo o array
    for (int i = 0; i < 6; i++) {
        printf("Digite sua altura (m): ");

        //Adicionando elementos no array
        scanf("%f",&alturas[i]);
    }

    float media_total = media_alturas(alturas,soma);
    float mais_alto = maior_altura(alturas);
    float mais_baixo = menor_altura(alturas);

    printf("\nMedia das alturas informadas = %.2f\nMaior altura = %.2f\nMenor altura = %.2f\n",media_total,mais_alto,mais_baixo);

    return 0;

}