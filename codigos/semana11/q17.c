/*Após diversos estudos, finalmente descobriu-se que nas músicas da Xuxa na verdade são invertidas as palavras sem inverter a ordem delas na frase.

Ajude a Xuxa no seu próximo CD. 

Implemente um programa que recebe uma frase e inverta cada palavra sem alterar a ordem das palavras na frase.*/
#include <stdio.h>

int main(){
    char frase[200];
    char ret[200];
    int aux = 0;
    scanf("%[^\n]", frase);
    
 
    
    int tam = 0;
    while(frase[tam] != '\0'){
        tam++;
    }
    int ult = 0;
    for(int cont = 0; cont <= tam; cont++){
        if(frase[cont] == ' ' || frase[cont] == '\0'){
            
            for(int c1 = (cont-1); c1 >= ult; c1--){
                ret[aux] = frase[c1];
                aux++;
            }
            ult = cont +1;
            ret[aux] = ' ';
            aux++;
        }
    }
    
    for(int cont = 0; cont < aux; cont++){
        printf("%c", ret[cont]);
    }

    return 0;
}