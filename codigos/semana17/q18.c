/*Implemente uma função que receba um vetor de inteiro e aplique o módulo em todos os elementos desse vetor. Também implemente uma função que retorna o módulo de um inteiro e use na função anterior.

Na função main, chame essa função passando o vetor como parâmetro e observe que as alterações feitas dentro da função, são aplicadas no vetor original da função main.

Imprima o vetor modificado*/
#include <stdio.h>

int modulo(int num){
    if(num < 0){
        num*=-1;
    }
    
    return num;
}
void modulo_vetor(int vet[], int tam){
    for(int cont = 0; cont < tam; cont++){
        vet[cont] = modulo(vet[cont]);
    }
}
int main(){
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont <tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    modulo_vetor(vet, tam);
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vet[cont]);
    }
    
    return 0;
}