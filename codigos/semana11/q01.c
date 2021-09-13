/*A entrada desse programa será um vetor de inteiros de tamanho n. 

Depois você deve somar os números do vetor até encontrar o primeiro número negativo. Sempre terá esse número negativo.

Obrigatoriamente, você deve criar o vetor de inteiros e receber totalmente a entrada de dados e só depois calcula a soma usando While. .*/
#include <stdio.h>

int main(){
    int n, soma =0;
    scanf("%d", &n);
    int vet[n];
        
    int cont = 0;
    while(cont < n){
        scanf("%d", &vet[cont]);
        cont++;
    }
    
    cont =0;
    while(vet[cont] >= 0){
     soma+= vet[cont];
     cont++;
    }
    
    printf("%d", soma);
    

    
    
    
    
    return 0;
}