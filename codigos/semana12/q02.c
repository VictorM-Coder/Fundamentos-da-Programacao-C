/*Como um agente secreto do Thanos na terra, você é o responsável por criptografar todas as mensagens enviada entre os aliados dele para evitar que os vingadores leiam. Você decide utilizar uma criptografia chamada de Criptografia TENIS-POLAR. Você recebe uma frase e irá aplicar essa criptografia.

Nessa criptografia, para cada letra da palavra tenis que estão na frase, deve ser substituída pela sua correspondente na palavra polar. Todas as letras 't' da frase devem ser substituída pela letra 'p', todas as letras 'e' da frase devem ser substituída pela letra 'o', e assim sucessivamente, conforme tabela abaixo. O mesmo acontece com as letras da palavra polar que estão na frase. Todas as letras 'p' da frase devem ser substituída pela letra 't', todas as letras 'o' da frase devem ser substituída pela letra 'e', e assim sucessivamente, conforme tabela abaixo.

As demais letras, que não estão nas palavras tenis polar, não serão alteradas.



Suponha que a frase tenha apenas letras minúsculas e não tenham acentos.

Implemente um programa que recebe uma cadeia de caracteres e modifique essa cadeia aplicando a criptografia tenis polar. Depois imprima a cadeia modificada.

Tamanho máximo da frase será 100.*/
#include <stdio.h>

int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    int tam =0;
    
    while(frase[tam] != '\0'){
        tam++;
    }
    
    for(int c = 0; c < tam; c++){
        
        if(frase[c] == 't'){
            frase[c] = 'p';
        }else if(frase[c] == 'e'){
            frase[c] = 'o';
        }else if(frase[c] == 'n'){
            frase[c] = 'l';
        }else if(frase[c] == 'i'){
            frase[c] = 'a';
        }else if(frase[c] == 's'){
            frase[c] = 'r';
        }else if(frase[c] == 'p'){
            frase[c] = 't';
        }else if(frase[c] == 'o'){
            frase[c] = 'e';
        }else if(frase[c] == 'l'){
            frase[c] = 'n';
        }else if(frase[c] == 'a'){
            frase[c] = 'i';
        }else if(frase[c] == 'r'){
            frase[c] = 's';
        }
    }
    
    
    for(int c = 0; c < tam; c++){
        printf("%c", frase[c]);
    }
    return 0;
}