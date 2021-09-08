/*Faça somente essa questão se você fez a questão Mercantil V1.

Nessa versão do quadro "Qual o preço?" temos uma mudança, cada produto tem um valor que nenhum dos jogadores conhecem. O primeiro jogador chuta um valor. O segundo jogador chuta se acha que o valor do produto é maior ou menor que o valor chutado pelo primeiro jogador. O primeiro jogador ganha se ele acertar na mosca ou se o segundo errar a direção do chute. Caso contrário, o segundo ganha.

Implemente um programa ira receber o valor do produto, depois o chute do primeiro jogador e a escolha do segundo jogador, maior(M) ou menor(m).*/
#include <stdio.h>

int main(){
    float valor, chute;
    char palp;
    
    scanf("%f %f %c", &chute, &valor, &palp);
    
    if(chute == valor){
        printf("primeiro");
    }else if(chute > valor){
        if(palp == 'M'){
            printf("segundo");
        }else{
            printf("primeiro");
        }
    }else{
        if(palp == 'm'){
            printf("segundo");
        }else{
            printf("primeiro");
        }
    }
    
    return 0;
}