/*Implemente um programa que recebe um caracter e precisamos saber se ele é uma letra. caso positivo, precisamos saber se é uma vogal ou consoante.

Imprima 1 ou 0 se ele for uma letra ou não, caso seja uma letra, imprima V ou C se ele for uma vogal ou consoante.

Dica: No C, os caractes são somente os que estão na Tabela Asc II. Internamente, o C trata uma variável do tipo char como um inteiro. Vejamos o exemplo abaixo:

char ex = 'A';

printf("%d", ex);

printf("%c", ex);

O primeiro printf irá exibir 65 e o segundo A. O primeiro colocamos %d indicando que queremos imprimir um inteiro, por isso o C imprimiu o valor inteiro do código ACS II que representa a letra maiúscula A.

Para a noooosa alegria, as letras, tanto maiúscula como minúsculas estão em sequencia, logo, podemos identificar se um char é ou não uma letra e se for uma letra, se é maiúscula ou minúsculas.*/
#include <stdio.h>

int eLetra(char ent){
    int isLetter = 0;
    
    if((ent >= 65 && ent <= 122) && !(ent >= 91 && ent <= 95)){
        isLetter = 1;
    }
    
    return isLetter;
}

char eVogal(char ent){
    char tipo = 'C';
    
    if(ent == 'A' || ent == 'E' || ent == 'I' || ent == 'O' || ent == 'U' || ent == 'a' || ent == 'e' || ent == 'i' || ent == 'o' || ent == 'u'){
        tipo = 'V';
    }
    return tipo;
    
}
int main(){
    char ent;
    scanf("%c", &ent);
    
    printf("%d ", eLetra(ent));
    if(eLetra(ent) == 1){
        printf("%c", eVogal(ent));
    }
    
   
    return 0;
}