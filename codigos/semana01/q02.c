//Escreva um programa que recebe dois números inteiros e retorna a média aritmética deles.
#include <stdio.h>
int main(){
    int n1, n2;
    printf("digite um número");
    scanf("%d", &n1);
    printf("digite outro número");
    scanf("%d", &n2);
    float medi = (float) (n1 + n2)/2;
    printf("%f", medi);
    return 0;
}