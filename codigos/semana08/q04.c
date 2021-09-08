/*O Prof. Fabio não para e inventou outra fórmula maluca. Temos um inteiro n e desejamos calcular o valor da seguinte fórmula:.

formula = 1*n + 2*(n-1) + 3*(n-2) + ... + i*j

Iremos somar até que i seja maior que j.

Vamos com um exemplo para melhor entendimento:

Suponha que n = 8, então a soma será: 1*8 + 2*7 + 3*6 + 4*5

Suponha que n = 11, então a soma será: 1*11 + 2*10 + 3*9 + 4*8 + 5*7 + 6*6

Implemente um programa que recebe o valor de n e calcule o valor da soma e depois imprima.*/
#include <stdio.h>

int main(){
    int ent, tot =0;
    
    scanf("%d", &ent);
    for(int cont = 1; !(cont > ent); cont++){
        tot += (cont * ent);
        ent--;
        
    }
    
    printf("%d", tot);
    
    return 0;
}