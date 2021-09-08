/*Nessa nova versão, a quantidade de números não será fixa em 70 (como na versão 1), mas será informada incialmente, ou seja, será dinâmica. Seja n essa quantidade de números.

Implemente um programa que recebe uma lista de n números inteiros e calcule a soma dos números que estão nas posições pares e a soma dos números que estão nas posições impares. Imprima a soma dos pares e depois a soma dos impares, na mesma linha.*/
#include <stdio.h>

int main(){
    
    int rod, totPa =0, totIm=0;
    
    scanf("%d", &rod);
    
    for(int cont =1; cont <= rod; cont++){
        int ent;
        scanf("%d", &ent);
            
        if(cont%2 == 0){
            totPa += ent;
        }else{
            totIm += ent;
        }//fim if
    }//fim for
    
    printf("%d %d", totPa, totIm);
    
    return 0;
}