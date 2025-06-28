#include <stdio.h>

#define TAM 5

// Função para fazer o ponteiro "avançar" os endereços de memória
void preencher_array(int *ponteiro) {

    for (int i = 0; i < TAM; i ++){ 

        printf("\nInforme o valor da posicao [%d]: ",i);
        scanf("%d",ponteiro);

        ponteiro++;
    }
}

int main() {
    
    // Criando um Array
    int VETOR[TAM];

    // Ponteiro irá armazenar inicialemte o endereço de memória da posição 0 de VETOR
    int *p = &VETOR[0];
    int soma = 0;

    // Serão armazenadas valores nos endereços de memória de cada posição do array
    preencher_array(p);

    for (int i = 0; i < TAM; i ++) {
        
        printf("\nVETOR[%d] =\t %d\n",i,*p);

        // Soma recebe os valores (NÃO OS ENDEREÇOS DE MEMÓRIA) do ponteiro atual
        soma += *p;

        // Incrementa o ponteiro
        p++;
    }

    printf("\nSOMA = %d\n",soma);
    
    return 1;
}