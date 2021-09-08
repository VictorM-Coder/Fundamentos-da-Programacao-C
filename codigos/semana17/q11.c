/*Um palíndromo é uma seqüência de caracteres cuja leitura é idêntica se feita da direita para esquerda ou vice-versa. 

Por exemplo: OSSO e OVO são palíndromos. 

Em frases os espaços e pontuação são ignorados. A frase "Subi no Onibus" é o exemplo de uma frase palíndromo onde os espaços foram ignorados. 

Implemente uma função que recebe uma cadeia de caracteres e retorna verdadeiro se essa cadeia é um palíndromo e falso caso contrário. Ignore os espaços em brancos, e as seguintes pontuações: ponto(.), virgula(,), Interrogação (?) e Exclamação(!). As letras maiúsculas e minúsculas serão consideradas iguais. Nas frases, as vogais não terão acertos. 

Na função main, receba essa frase e armazene uma cadeia de caracteres alocada dinamicamente e chame a função para saber se ela é palíndromo ou não.  

Considere o tamanho máximo da frase 100 e que as letras não terão acentos.*/

#include <stdio.h>
#include <stdlib.h>
void caixa_alta(char frase[]){
    int cont = 0;
    while(frase[cont] != '\0'){
       
        if(frase[cont] >= 97 && frase[cont] <= 172){
            frase[cont] = frase[cont] - 32;
        }
        cont++;
    }
}

int pali(char frase[], int tam, int ini){
    char aux[tam];
    for(int cont = 0, pos = 0; cont < tam; cont++){//armazena somente as letras válidas no palindromo
        char rod = frase[cont];
        if(rod != ',' && rod != '.' && rod != '?' && rod != '!' && rod != ' '){
            aux[pos] = rod;
            pos++;
        }
    }//fim for
    caixa_alta(aux);
    
    int tam2 = 0;
    while(aux[tam2] != '\0'){
        tam2++;
    }
    
    for(int c1 = 0, c2 = (tam2 - 1); c1 < tam2; c1++, c2--){//verifica se ler de tras pr frente é o mesmo do sentido normal
        if(aux[c1] != aux[c2]){
            return 0;
        }
    }
        
    return 1;
}
int main(){
    char *frase = (char*) malloc(101*sizeof(char));
    scanf("%[^\n]", frase);
    int tam = 0;
    
    while(frase[tam] != '\0'){
        tam++;
    }
    
    if(pali(frase, tam, 0)){
        printf("SIM");
    }else{
        printf("NAO");
    }
    
    free(frase);
    return 0;
}