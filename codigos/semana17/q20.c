/*Pegue seu código da questão LP da Xuxa - Inverter uma frase e coloque dentro de uma função. Sua função irá receber uma cadeia de caracteres e retornar void.

Perceba que as alterações feitas na função serão aplicadas na cadeia original dentro da função main.*/
#include <stdio.h>

void inverter_frase(char frase[]){
    int tam  = 0;
    while(frase[tam] != '\0'){
        tam++;
    }
    for(int c1 = 0, c2 = tam-1; c2 > c1; c1++, c2--){
        
        char ini = frase[c1];
        char fim = frase[c2];
        
        frase[c1] = fim;
        frase[c2] = ini;
    }
}
int main(){

    char frase[100];
    scanf(" %[^\n]", frase);
    
    inverter_frase(frase);
    printf("%s", frase);
    return 0;
}