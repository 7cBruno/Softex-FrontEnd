#include<stdio.h>
#include<stdlib.h>

// Declaração da função
void bubbleSort(int lista[], int qntElementos){
    int interacoes, comparacoes, aux;
    for(interacoes = 1; interacoes < qntElementos; interacoes++) {
        for(comparacoes = 0; comparacoes < qntElementos - interacoes; comparacoes++) {
            if(lista[comparacoes] > lista[comparacoes + 1]) {
                aux                     = lista[comparacoes];
                lista[comparacoes]      = lista[comparacoes + 1];
                lista[comparacoes + 1]  = aux;
            }
        }
    }
    
    
}

// Função principal
int main()
{
    int tamanhoArray = 10, i;
    // Declaração de array
    int lista[10] = {99, 77, 33, 100, 11, 88, 44, 22, 55, 66};
    
    printf("Antes\n");
    for(i = 0; i < tamanhoArray; i++) {
        printf("[");
        printf("%d", lista[i]);
        printf("]");
    }

    // Chamada da função para ordenação
    bubbleSort(lista, tamanhoArray);
    printf("\nDepois\n");
    for(i = 0; i < tamanhoArray; i++) {
        printf("[");
        printf("%d", lista[i]);
        printf("]");
    }


    return 0;
}