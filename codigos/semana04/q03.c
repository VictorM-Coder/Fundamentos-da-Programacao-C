/*Pedra, papel e tesoura, também chamado no Brasil de jokenpô (do japonês じゃんけんぽん, jankenpon) é um jogo de mãos recreativo e simples para duas ou mais pessoas.

No Janken-pon, os jogadores devem simultaneamente esticar a mão, na qual cada um formou um simbolo (que significa pedra, papel ou tesoura). Então, os jogadores comparam os símbolos para decidir quem ganhou, da seguinte forma:

Pedra ganha da tesoura (amassando-a ou quebrando-a).
Tesoura ganha do papel (cortando-o).
Papel ganha da pedra (embrulhando-a).
Caso dois jogadores façam o mesmo gesto, ocorre um empate.

Suponha que Pedra = 1, Tesoura = 2 e Papel = 3

O programa irá receber dois números representando a jogada dos jogadores e deve dizer quem ganhou, jogador 1 ou 2 ou empate 0.
*/

#include <stdio.h>

int main(){
    int jogada1, jogada2;
    
    scanf("%d", &jogada1);
    scanf("%d", &jogada2);
    /*
    1 = pedra / 2 = tesoura / 3 = papel
    se jogador 1 ganhar = retorna 1
    se jogador 2 ganhar  = retorna 2
    empate = 0
    */
    
    if(jogada1 == 1){
        if(jogada2 == 2){
            printf("1");
        }else if(jogada2 == 3){
            printf("2");
        }else{
            printf("0");
        }
        
    }else if(jogada1 == 2){
        if(jogada2 == 1){
            printf("2");
        }else if(jogada2 ==3){
            printf("1");
        }else{
            printf("0");
        }
        
    }else{
        if(jogada2 == 1){
            printf("1");
        }else if(jogada2 == 2){
            printf("2");
        }else{
            printf("0");
        }
    }
    
    
    return 0;
}