/*Reimplemente a questão SOMA DE DOIS VETORES utilizando a alocação dinâmica de memória na criação de vetores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;
    scanf("%d", &tam);
    
    int *vet1 = (int*) malloc(tam*sizeof(int));
    int *vet2 = (int*) malloc(tam*sizeof(int));
    int *soma = (int*) malloc(tam*sizeof(int));
    
    for(int cont  =0; cont < tam; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    for(int cont = 0; cont < tam; cont++){
        soma[cont] = vet1[cont] + vet2[cont];
    }
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", soma[cont]);
    }
    free(vet1);
    free(vet2);
    free(soma);
    return 0;
}