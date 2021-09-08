/*No programa do Silvio Santos, havia um quadro chamado Qual o Preço?, no qual o Silvio mostrava um produto do mercantil e a pessoa que chegasse mais próximo do preço real ganhava.

Implemente u programa que recebe o valor do produto e o valor do chute dos jogadores. O jogador que chegar mais perto ganha. Temos dois jogadores.

Se ambos ficarem à mesma distancia do valor, então houve empate.

A primeira linha será informado o valor do produto e os chutes jogadores na ordem. A saída deve ser primeiro se o chute do primeiro jogador for o mais próximo do valor do produto ou segundo se o chute do segundo jogador for o mais próximo do valor do produto ou empate caso ambos ficarem à mesma distancia*/
#include <stdio.h>

int main(){
    float chute1, chute2, valor, prox1, prox2;
    scanf("%f %f %f", &valor, &chute1, &chute2);
    
    prox1 = ((valor - chute1) < 0)? (valor - chute1) * -1: valor - chute1; 
    prox2 = ((valor - chute2) < 0)? (valor - chute2) * -1: valor - chute2; 
    
    
    if(prox1 == prox2){
        printf("empate");
    }else if(prox1 < prox2){
        printf("primeiro");
    }else{
        printf("segundo");
    }
    
}