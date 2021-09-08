/*Implemente um programa que recebe uma frase do usuário e converte para maiúscula.

Para isso, implemente uma função que recebe uma cadeia de caracteres e faça essa transformação. Essa sua função irá retornar void.

Cuidado, a frase pode conter letras já em maiúscula e outros caracteres sem ser letras.

ATENÇÃO!!!!

VOCÊ NÃO PODE IMPRIMIR NADA DENTRO DA FUNÇÃO IMPLEMENTADA, APENAS NA FUNÇÃO MAIN*/
#include <stdio.h>

void caixa_alta(char frase[]){
    int cont = 0;
    while(frase[cont] != '\0'){
       
        if(frase[cont] >= 97 && frase[cont] <= 172){
            frase[cont] = frase[cont] - 32;
        }
        cont++;
    }
}
int main(){
    int tam;
    scanf("%d", &tam);
    char frase[tam];
    scanf(" %[^\n]", frase);
    
    caixa_alta(frase);
    
    printf("%s", frase);
    
    return 0;
}