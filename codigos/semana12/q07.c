/*Somente faça essa questão se você fez a versão JOGO DA ADIVINHAÇÃO

Nesta versão 2, trocamos os papeis. agora o usuário irá escolher um número entre 1 a 1024 (não irá informar o número escolhido ao programa) e o computador irá tentar acertar o número que o usuário escolheu, chutando um número (gerando um número aleatório entre 1 e 1024). 

Assim como na versão anterior, a cada chute do computador, o usuário irá informar ao computador se esse chute que o computador gerou é maior('M') ou menor('m') ou igual('A') a chave.

Esse processo irá se repete até que o computador acerte a chave.

Atenção, use a estratégia do jogo para implementar um jogador (o computador) mas inteligente, de tal forma que ele possa ganhar. Repare que inicialmente o chute do computador será gerado dentro do intervalo de 1 a 1024, mas depois do primeiro número, o computador pode diminuir esse intervalo, usando o feedback do usuário. Se o primeiro chute foi 150 e o usuário informou que é menor que a chave, então o computador sabe que a chave está entre 151 e 1024.

Use a função getchar(); para que o programa espere o usuário digitar enter, caso você queira fazer igual ao meu exemplo na figura abaixo que mostrei uma mensagem inicial.

 

OBS: NÃO TEM CASOS DE TESTE, ESCOLHA UMA CHAVE E JOQUE COM O COMPUTADOR ATÉ ELE ACERTAR.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num;
    printf("Informe um número para o computador adivinhar! mas seja silencioso> ");
    scanf("%d", &num);
    
    int max = 1024, min =1;
    int palpite, tentativas = 0;
    
    do{
        tentativas++;
        do{
            palpite = rand() % max + 1;
        }while(palpite < min);
        
        printf("Meu chute ed: %d\n", palpite);
       
        
        char status;
        if(palpite != num){
            if(palpite > num){
                status = 'M';
                max = palpite - 1;
            }else if(palpite < num){
                status = 'm';
                min = palpite +1;
            }//fim IF interno
            
        }else{
            status = 'A';
        }
        
        printf("Diga como estou: %c\n", status);
        
    }while(palpite != num);
    
    printf("ACERTEI!!!\n\n");
    printf("aceitei em %d tentativas", tentativas);
  
    return 0;
}