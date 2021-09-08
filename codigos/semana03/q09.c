/*Implemente uma calculadora básica que executa as 4 operações matemáticas básicas : +, -, * ou /.

Se a operação não pode ser realizada, imprima "Operacao invalida.

Abaixo temos os casos em que a operação não pode ser realiza:

1 - O operador fornecido é diferente de '+', '-', '*' ou '/';

2 - Divisão por zero.

Implemente um programa que recebe dois número e um caracter indicando a operação a ser realizada e imprima o resultado da operação.

ATENÇÃO: A ordem de entrada dos números indicam a ordem deles na operação. Exemplo: Seja a entrada "12.00 4.00 -" significa a operação "12.00 - 4.00".*/
#include <stdio.h>

int main(){
    
    double ent1, ent2;
    char op;
    
    scanf("%lf %lf %c", &ent1, &ent2, &op);
    
    
        
        if(op == '+'){
            printf("%lf", ent1 + ent2);
            
        }else if(op == '-'){
            printf("%lf", ent1 - ent2);
            
        }else if(op == '*'){
            printf("%lf", ent1 * ent2);
            
        }else if(op == '/'){
            if(ent2 != 0){
                printf("%lf", ent1/ent2);
            }else{
                printf("Operacao invalida");
            }
        }else{
            printf("Operacao invalida");
        }//fim if interno
    
    
    
    
    return 0;
}