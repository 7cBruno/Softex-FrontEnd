
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  Define um ponteiro
    int i, tamanhoInicial = 5, tamanhoFinal = 22,*vetor = NULL; 
    
    /*  
        Transfora o ponteiro em um vetor de inteiros com tamanho 5
        por meio de alocação simples malloc().
    */
    vetor = (int *) malloc(tamanhoInicial * sizeof(int));
    
    // Adiciona valores ao vetor
    for(i = 0; i < tamanhoInicial; i++) {
        vetor[i] = 100 + i;
    }
    
    printf("Valores iniciais do vetor:\n");
    for(i = 0; i < tamanhoInicial; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    /*
        Redimissiona o tamanho do vetor
    */
    vetor = (int *) realloc(vetor, tamanhoFinal * sizeof(int));
    
    for(i = tamanhoInicial; i < tamanhoFinal; i++) {
        vetor[i] = 200 + i;
    }
    
    printf("Novos valores no vetor");
    for(i = 0; i < tamanhoFinal; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    // Libera a memória usada
    free(vetor);
    return 0;
}
