/*Implemente um programa que recebe um vetor de inteiros e o transforme no seu vetor inverso. O vetor inverso de um vetor é um vetor com os elementos em posição trocadas. O primeiro passa a ser o último e o último o primeiro, o segundo passa a ser o penúltimo e o penúltimo passa a ser o segundo, e assim sucessivamente.

Nessa versão você obrigatoriamente deve usar um vetor auxiliar, que irá ser o inverso do vetor de entrada e só depois, você irá copiar esse vetor auxiliar para o vetor de entrada.

Obrigatoriamente, você deve alterar o vetor de entrada e só depois imprimir o resultado. Não pode simplesmente imprimir.*/
#include <stdio.h>

int main(){
    int n1;
    scanf("%d", &n1);
    int vet[n1];
    int vetIn[n1];
    
    for(int cont = 0; cont < n1; cont++){
        scanf("%d", &vet[cont]);
    }
    
    int aux = 0;
    for(int cont = (n1-1); cont >= 0; cont--){
        vetIn[cont] = vet[aux];
        aux++;
    }
    
    for(int cont = 0; cont < n1; cont++){
        vet[cont] = vetIn[cont];
    }
    
    for(int cont = 0; cont < n1; cont++){
        printf("%d ", vet[cont]);
        
    }
   
    
    
    return 0;
}