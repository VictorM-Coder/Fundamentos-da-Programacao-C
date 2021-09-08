/*Numa lista (spoiler da cadeira de Estrutura de Dados), os elementos estão organizado da seguinte forma, de acordo com sua posição na lista. O primeiro elemento está na posição 1, o segundo elemento está na posição 2, o terceiro elemento está na posição 3 e assim sucessivamente,

Implemente um programa que recebe uma lista de 70 números inteiros e calcule a soma dos números que estão nas posições pares e a soma dos números que estão nas posições impares. Imprima a soma dos pares e depois a soma dos impares, na mesma linha.*/
#include <stdio.h>

int main(){
    int totPa = 0, totIm = 0;
    for(int cont = 1; cont <=70; cont++){
        int ent;
        scanf("%d", &ent);
        
        if(cont%2 == 0){
            totPa += ent;
        }else{
            totIm += ent;
        }//fim If
    }//fim for
    
    printf("%d %d", totPa, totIm);
    
    return 0;
}