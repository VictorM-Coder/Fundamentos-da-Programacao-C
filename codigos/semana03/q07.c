//implemente um programa que recebe um número inteiro e diga se ele é positivo ou negativo ou nulo
#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    if(n == 0){
        printf("0");
    }
        
    if(n >0){
        printf("+");
    }
    
    if(n < 0){
        printf("-");
    }
    
    return 0;

}