/*Agora você terá dois intervalos de números inteiros, digamos, [inf1, sup1] e [inf2, sup2]. Os intervalos podem ter tamanhos distintos, em outras palavras, a quantidade de inteiros em [inf1, sup1] pode ser diferente em [inf2, sup2].

Queremos somar as seguintes multiplicações:



Iremos somar até que inf1 + k seja igual sup1 ou sup2 - k seja igual a inf2.

Vamos com um exemplo para melhor entendimento:

Suponha que os intervalos sejam [3, 7] e [5, 12], então a soma será: 3*12 + 4*11 + 5*10 + 6*9 + 7*8.

Suponha que os intervalos sejam [11, 20] e [3, 5], então a soma será: 11*5 + 12*4 + 13*3.

Implemente um programa que recebe os intervalos e calcule o valor da soma e depois imprima.*/
#include <stdio.h>

int main(){
    int ini1, ini2, fim1, fim2, tot =0;
    scanf("%d %d %d %d", &ini1, &fim1, &ini2, &fim2);
    
    int m = fim2;
    int test;
    
    for(int cont = ini1;test; cont ++){
        tot += cont * m;
       
        if(m == ini2 ||cont == fim1){
            test = 0;
        }
        m--;
    }
    printf("%d", tot);
    
    return 0;
}