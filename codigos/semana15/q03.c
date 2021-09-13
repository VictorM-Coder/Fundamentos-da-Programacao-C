/*Implemente um programa que recebe do usuário os dados de uma PA, primeiro elemento e a razão, e um número. O programa deve informar se o terceiro número informado pertence a PA.

Você deve implementar uma função que recebe esses três números e retorne verdadeiro se o terceiro número pertence a PA ou falso, caso contrário*/
#include <stdio.h>

int pertencePa(int ele1, int razao, int num){
    int igual = 0, eleN = ele1;
    
    do{
        if(eleN == num){
            igual = 1;
            break;
        }
        
        eleN += razao;
        
    }while(eleN <= num);
    
    return igual;
}
int main(){
    int ele1, razao, num;
    scanf("%d %d %d", &ele1, &razao, &num);
    
    int saida = pertencePa(ele1, razao, num);
    printf("%d", saida);
    
    
    return 0;
}