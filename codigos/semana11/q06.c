/*Implemente um programa que recebe um inteiro n > 0 e imprima a sequência abaixo até o n-ésimo termo.

1, 3, 7, 15, 31, 63, ...*/
#include <stdio.h>

int main(){
    int ent, ant =1;
    scanf("%d", &ent);
    
    for(int cont = 1; cont <= ent; cont++){
        printf("%d ", ant);
        
        ant = (2 * ant) +1;
    }
    
    return 0;
}