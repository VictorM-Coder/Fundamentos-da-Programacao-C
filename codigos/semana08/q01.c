/*O professor Fabio criou a seguinte formula que ele chamou de multiplicação invertida. Seja uma lista com n números, onde a1 é o primeiro elemento da lista, a2 o segundo e assim sucessivamente:



Em outras palavras, o primeiro número multiplicamos por n, o segundo número por n-1, o terceiro por n-2 e assim sucessivamente até multiplicarmos o último número por 1.

Vejamos o exemplo para n = 5 com o números da lista sendo 8 2 9 3 7. A formula será 8*5 + 2*4 + 9*3 + 3*2 + 7*1.

Implemente um programa que recebe uma lista de n números inteiros e calcule o valor da fórmula e depois imprima.*/
#include <stdio.h>

int main(){
    int rod, tot = 0;
    scanf("%d", &rod);
    
    for(int cont  = rod; cont >0; cont--){
        int ent;
        scanf("%d", &ent);
        
        tot += ent * cont;
    }
    
    printf("%d", tot);
    
    return 0;
}