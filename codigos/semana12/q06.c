/*Implemente um programa que recebe um vetor de inteiros e gere outro vetor contendo apenas os números pares do vetor de entrada. O tamanho desse segundo vetor deve ser igual a quantidade de números pares, para não deixar posição não ocupada no vetor.

Depois calcule a média dos números desse segundo vetor.

Imprima a média com duas casas decimais.*/
#include <stdio.h>

int main(){
    int tam, qntPar = 0;
    
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
        
        if(vet[cont]%2==0){
            qntPar++;
        }
    }//fim for
    
    int vetPar[qntPar];
    
    for(int c1 = 0, c2 =0; c1 < tam; c1++){
        if(vet[c1]%2==0){
            vetPar[c2] = vet[c1];
            c2++;
        }
    }
    
    float tot = 0;
    for(int cont = 0; cont < qntPar; cont++){
        tot += vetPar[cont];
    }
    
    float media = tot/qntPar;
    
    printf("%.2f", media);
    return 0;
}