/*Implemente um programa que irá receber um inteiro do usuário e imprima "SIM" se esse inteiro for divisível por 5 e por 3, ou se não for divisível por 7. Caso contrário imprima "NAO".*/
#include <stdio.h>

int main(){
    int n1;
    
    scanf("%d", &n1);
    
    if(n1%5 == 0){
        if(n1%3 == 0){
            printf("SIM");
        }else if(n1%7 != 0){
            printf("SIM");
        }else{
            printf("NAO");
        }
    }else if(n1%7 != 0){
        printf("SIM");
    }else{
        printf("NAO");
    }
        
    return 0;
}