/*Leia do usuário dois valores inteiros, inferior e superior (nesta ordem), e calcule a soma dos valores na faixa [inferior, ..., superior] intercalando os números somados.

Vamos com um exemplo para melhor entendimento:

Suponha que o intervalo seja [3, 10], então a soma será com os números 3 + 5 + 7 + 9.

Suponha que o intervalo seja [6, 20], então a soma será com os números 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20.

Implemente um programa que recebe o intervalo e calcule o valor da soma e depois imprima.*/
#include <stdio.h>

int main(){
    int inf, sup, soma  = 0;
    
    scanf("%d %d", &inf, &sup );
    
    for(int cont = inf; cont <= sup; cont+=2){
        soma += cont;
    }
    
    printf("%d", soma);
    
    
    return 0;
}