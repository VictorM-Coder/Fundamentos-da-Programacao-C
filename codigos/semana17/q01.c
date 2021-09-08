/*Aqui, você vai encapsular em uma função essa operação de expandir um vetor de inteiros alocado dinamicamente.

Implemente uma função que recebe como parâmetro dois vetores de inteiros alocados dinamicamente de tamanhos n e m, respectivamente. Veja uma sugestão abaixo:

int* expandir_vetor(int* vet, int n, int* vet2, int m){}

ATENÇÃO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!   Como iremos liberar na função os vetores passados como parâmetros, precisamos usar int* vet no lugar de int vet[].

Essa função irá alocar dinamicamente um vetor de tamanho n+m e irá copiar os elementos do vetor vet e vet2, nessa ordem, nesse novo vetor. Irá liberar a memória dos dois vetores e retornar o endereço do novo vetor.

Na função principal, receba esses dois vetores e armazene em vetores alocados dinamicamente. Chame a função para fazer essa expansão e receba o endereço do novo vetor em um ponteiro.

Depois imprima esse novo vetor.*/

#include <stdio.h>
#include <stdlib.h>
int *expandir_vetor(int* vet, int n, int* vet2, int m){
    int *vet_ret = (int*)malloc((m+n)*(sizeof(int)));
    
    for(int cont = 0; cont < n; cont++){
        vet_ret[cont] = vet[cont];
    }
    for(int cont = n, c2 = 0; cont < n+m; cont++, c2++){
        vet_ret[cont] = vet2[c2];
    }
    
    free(vet);
    free(vet2);
    
    return vet_ret;
}

int main(){
    int tam1;
    scanf("%d", &tam1);
    
    int *vet1 = (int*)malloc(tam1*sizeof(int));
    
    for(int cont = 0; cont < tam1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    int tam2;
    scanf("%d", &tam2);
    int *vet2 = (int*)malloc(tam2*sizeof(int));
    
    for(int cont = 0; cont < tam2; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    int *vet_saida = expandir_vetor(vet1, tam1, vet2, tam2);
    
    for(int cont = 0; cont < tam1+tam2; cont++){
        printf("%d ", vet_saida[cont]);
    }
    
    free(vet_saida);
    
    return 0;
}