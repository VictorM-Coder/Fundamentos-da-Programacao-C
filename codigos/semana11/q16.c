/*Implemente um programa que recebe uma frase e uma palavra, e gere um vetor de inteiros contendo a quantidade de vezes que cada letra da palavra ocorre na frase.

Depois imprima o vetor de inteiros.

Obrigatoriamente, você deve criar o vetor de inteiros com a ocorrência das letras e só depois imprimir.*/
#include <stdio.h>

int main(){
    char frase[100];
    char palavra[20];
    
    scanf("%[^\n]", frase);

    
    int tam =0;
    while(palavra[tam] != '\0'){
        tam++;
        printf("e");
    }
    
   
    int repeticao[tam];
    
    for(int cont = 0; cont < tam; cont++){
        int i =0;
        repeticao[cont] = 0;
        while(frase[i] != '\0'){
            if(palavra[cont] == frase[i]){
                repeticao[cont]++;
                
            }
            
            i++;
        }
    }
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", repeticao[cont]);
    }
    return 0;
}