/*Implemente um programa que recebe uma frase e conte a quantidade de vezes que cada vogal aparece.

Para isso, implemente uma função que recebe uma cadeia de caracteres e um char como parâmetros e retorna quantas vezes esse char aparece na cadeia de caracteres.

Use essa função para implementar a questão. 

As vogais podem estar em minúsculas ou maiúsculas.

Imprima as quantidades seguindo a sequência delas: primeiro da vogal a, depois da vogal e, etc.

O tamanho máximo da frase será 150 e as letras não terão acentos.*/

#include <stdio.h>

int calcular_repeticao(char frase[], char letra){
    int qnt = 0;
    
    int tam = 0;
    while(frase[tam] != '\0'){
        if(frase[tam] == letra){
            qnt++;
        }
        tam++;
    }
    
    return qnt;
}
int main(){
    char frase[151];
    scanf("%[^\n]", frase);
    
    int qnt_a = calcular_repeticao(frase, 'a') + calcular_repeticao(frase, 'A'); 
    int qnt_e = calcular_repeticao(frase, 'e') + calcular_repeticao(frase, 'E'); 
    int qnt_i = calcular_repeticao(frase, 'i') + calcular_repeticao(frase, 'I'); 
    int qnt_o = calcular_repeticao(frase, 'o') + calcular_repeticao(frase, 'O'); 
    int qnt_u = calcular_repeticao(frase, 'u') + calcular_repeticao(frase, 'U'); 
    
    printf("%d %d %d %d %d", qnt_a, qnt_e, qnt_i, qnt_o, qnt_u);
    
    
    
    
    return 0;
}