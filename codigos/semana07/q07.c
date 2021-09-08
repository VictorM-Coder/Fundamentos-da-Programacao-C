/*O professor Fabio criou a seguinte formula maluca. Seja uma lista com 33 números, onde a1 é o primeiro elemento da lista, a2 o segundo e assim sucessivamente:



Repare que na fórmula, aos números de posição pares, dividimos pela posição + 2. Já aos números de posição impares, dividimos pela posição + 3

Implemente um programa que recebe uma lista de 33 números inteiros e calcule o valor da fórmula. Depois imprima.*/
#include <stdio.h>

int main(){
    float tot = 0;
   
    for(int cont = 1; cont <= 33; cont++){
        int ent;
        scanf("%d", &ent);
       
       
        if(cont % 2 == 0){
            tot += ent/(cont + 2.0);
        }else{
             tot += ent/(cont + 3.0);
        }
       
    }
   
    printf("%.2f", tot);
    
    return 0;
}