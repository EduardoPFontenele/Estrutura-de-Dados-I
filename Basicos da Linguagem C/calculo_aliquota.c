#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor;
    float aliquota;

    printf("Informe o valor monetário para o calculo da alíquota: ");
    scanf("%f",&valor);

    if (valor < 0) {

        printf("\nValor Inválido!");
    }
    else if (valor <= 22000.00) {
        printf("\nVALOR MONETÁRIO = R$ %f",valor);
        printf("\nVALOR DA ALÍQUOTA = Isento\n");

    }

    else if (valor > 22000.00 && valor <= 33000.00) {
        aliquota = valor * 0.075;

        printf("\nVALOR MONETÁRIO = R$ %f",valor);
        printf("\nVALOR DA ALÍQUOTA = R$ %f\n",aliquota);

    }

    else if (valor > 33000.00 && valor <= 55000.00) {
        aliquota = (valor * 0.225);

        printf("\nVALOR MONETÁRIO = R$ %f",valor);
        printf("\nVALOR DA ALÍQUOTA = R$ %f\n",aliquota);

    }

    else if (valor > 55000.00) {
        aliquota = valor * 0.275;

        printf("\nVALOR MONETÁRIO = R$ %f",valor);
        printf("\nVALOR DA ALÍQUOTA = R$ %f\n",aliquota);
        
    }

    return 0;
    
}