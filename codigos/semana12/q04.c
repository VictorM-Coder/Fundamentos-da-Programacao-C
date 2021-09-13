/*Por um erro do estagiário que estava digitando vários textos, muitas frases tinha excesso de espaço em branco, devido um problema do teclado, sendo que ele só reparou no problema no final de um mês de trabalho, onde ele já tinha digitado diversos textos.

Implemente um programa para ajudar o estagiário. Seu programa vai receber uma frase com excesso de espaço em brancos, que pode está no início ou final da frase, ou entre duas palavras. Os espaços em brancos no início e final da frase devem serem totalmente removidos e os espaços entre as palavras você precisa deixar apenas um espaço em branco.

O tamanho máximo das frases são 100 caracteres.

Você precisar alterar a cadeia de caracteres e não apenas imprimir.*/
#include <stdio.h>

int main(){
    char frase[100];
    char ret[100];
    scanf("%[^\n]", frase);
    int tam = 0;
    int per = 0;
    
    while(frase[tam] != '\0'){
        tam++;
    }
    for(int cont = 0; cont <= tam; cont++){
        
        if(frase[cont] == ' '){
            if(cont == 0){
                while(frase[cont] == ' '){
                cont++;
                }
                cont--;
                continue;
            }
            
        
            while(frase[cont] == ' '){
                cont++;
            }
            
            if(cont == tam){
                break;
            }
            
            ret[per] = ' ';
            per++;
            ret[per] = frase[cont];
            per++;
            
        }else{
            ret[per] = frase[cont];
            per++;    
        }
        
        
    }
    
    ret[per] = '\0';
    for(int cont = 0; cont <= per; cont++){
        frase[cont] =  ret[cont];
    }
    printf("%s", frase);
    
    return 0;
    
}