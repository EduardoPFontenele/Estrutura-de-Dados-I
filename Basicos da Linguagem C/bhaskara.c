#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;
    int b;
    int c;
    
    printf("\n<< CALCULADORA DE EQUAÇÃO DE SEGUNDO GRAU >>\n");

    printf("Informe o valor do índice 'a' da equação de segundo grau: ");
    scanf("%d",&a);
    
    printf("Informe o valor do índice 'b' da equação de segundo grau: ");
    scanf("%d",&b);
    
    printf("Informe o valor do índice 'c' da equação de segundo grau: ");
    scanf("%d",&c);
    
    if (a != 0) {
        double dentro = (pow(b,2)) -4 * a *c;
        double delta = pow(dentro,0.5);
        double bhaskara1 = ((-b) + delta) / (2 * a);
        double bhaskara2 = ((-b) - delta) / (2 * a);

        printf("\nVALOR 1 DO BHASKARA = %lf",bhaskara1);
        printf("\nVALOR 2 DO BHASKARA = %lf",bhaskara2);
    }

    else {
        printf("O valor de 'a' deve ser diferente de 0 ");
    }

    return 0;
    

}