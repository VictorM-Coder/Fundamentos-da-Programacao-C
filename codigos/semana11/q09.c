/*Somente faça essa questão se você ainda fez a questão INVERTENDO VETOR V1.

Nessa versão você obrigatoriamente não pode usar um vetor auxiliar, deve alterar diretamente o vetor de entrada.

Obrigatoriamente, você deve alterar o vetor original e só depois imprimir o resultado.*/
#include <stdio.h>

int main(){
    int tam;
    scanf("%d",&tam);
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    int ini, fim;
    for(int cont = 0, dec = (tam - 1);  cont <= dec; cont++, dec--){
        ini = vet[cont];
        fim = vet[dec];
        
        vet[cont] = fim;
        vet[dec] = ini;
    }
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vet[cont]);
    }
    
    return 0;
}