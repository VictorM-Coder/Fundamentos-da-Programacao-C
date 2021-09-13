/*Implemente um programa que recebe um vetor de inteiros e depois um outro número inteiro que será chamado de chave de busca. Deve-se procurar essa chave dentro do vetor. Se o vetor contém essa chave imprima o índice onde ele se encontra, caso contrário, imprima -1.

O tamanho do vetor será o primeiro número informado, depois o vetor de inteiros e por fim a chave de busca.*/
#include <stdio.h>

int main(){
    
    int rod, ret = -1;
    scanf("%d", &rod);
    int vet[rod];
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%d", &vet[cont]);
    }//fim for1
    
    int busca;
    
    scanf("%d", &busca);
    
    for(int cont = 0; cont < rod; cont++){
        if(vet[cont] == busca){
            ret = cont;
            break;
        }//fim if
    }//fim for2
    
    printf("%d", ret);
    
    return 0;
}