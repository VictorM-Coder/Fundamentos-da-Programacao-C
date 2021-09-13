/*Implemente um programa que recebe uma frase do usuário e devolve a quantidade de vogais e consoantes existentes na frase. 

Cuidado, a frase pode conter alguns caracteres especiais, como espaço, '#', '$', etc, e números, além disso teremos letras minÚsculas e maiúsculas.

Primeiro implemente uma função que recebe um char e retorna verdadeiro se essa char é uma vogal, e falso caso contrário.

Depois, implemente outra função, parecido com a anterior, mas para consoante.

Use as duas funções para para resolver a questão.

o Tamanho máximo da frase é 100.

*/
#include <stdio.h>


int eVogal(char ent){
    if(ent == 'A' || ent == 'E' || ent == 'I' || ent == 'O' || ent == 'U' || ent == 'a' || ent == 'e' || ent == 'i' || ent == 'o' || ent == 'u'){
        return 1;
    }else{
        return 0;
    }
}//fim eVogal()

int eConsoante(char ent){
    if(!eVogal(ent) && ((ent >= 65 && ent <= 122) && !(ent >= 91 && ent <= 95))){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    char frase[100];
    
    scanf("%[^\n]", frase);
    
    int tam = 0, totV = 0, totC = 0;
    while(frase[tam] != '\0'){
        tam++;
    }
    
    for(int cont = 0; cont < tam; cont++){
        if(eVogal(frase[cont])){
            totV++;
        }else if(eConsoante(frase[cont])){
            totC++;
        }
    }
    
    printf("%d %d", totV, totC);
    
    return 0;
}