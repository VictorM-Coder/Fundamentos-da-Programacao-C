/*Implemente um programa que deve converter um vetor de inteiros de um único digito em um número inteiro e imprimir esse valor inteiro. Por exemplo, o vetor [7, 4, 3] será transformado no número 743 

Todos os elementos do vetor terão apenas um dígito e serão maiores e iguais a zero.

ATENÇÃO: OBRIGATORIAMENTE VC DEVE CRIAR UM VETOR DE INTEIROS PARA ARMAZENAR OS NÚMEROS DE ENTRADA*/
#include <stdio.h>
#include <math.h>

int main(){
    int rod, ret=0;
    scanf("%d", &rod);
    int vet[rod];
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet[cont]);
    }
    
    int inc =0;
    for(int cont = (rod-1); cont >=0 ; cont--){
       ret += vet[cont] * pow(10, inc);
       
       inc++;
    }
    
    printf("%d", ret);
    
    
    return 0;
}