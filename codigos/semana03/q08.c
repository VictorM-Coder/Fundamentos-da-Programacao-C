/*Implemente um programa que recebe um dos seguintes caracteres dos operadores matemático e digite o nome do operador: +, -, *, /, %.

Caso o caracter informado não seja nenhum dos 5 operadores, imprima NDA.*/
#include <stdio.h>

int main(){
    char ent;
    
    scanf("%c", &ent);
    
    if(ent == '+'){
        printf("Soma");
    }else{
        if(ent == '-'){
            printf("Subtracao");
        }else{
            if(ent== '*'){
                printf("Multiplicacao");
            }else{
                if(ent == '/'){
                    printf("Divisao");
                }else{
                    if(ent == '%'){
                        printf("Resto da divisao");
                    }else{
                        printf("NDA");
                    }
                }
            }
        }
    }
    
    return 0;
}