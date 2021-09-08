/*O Professor Fabio criou o seguinte jogo de pontuação que ao final, o jogador com maior pontos ganha. Os dois jogadores irão escolher 3 números positivos cada um. Depois eles vão sortear um número positivo, chamado de pivô. A pontuação dos jogadores será obtida da seguinte forma, de acordo com o valor do pivô, se ele for par ou impar:

PAR: Os números pares dos 3 números escolhidos serão bonificação e os números impares serão penalização. Então a pontuação do jogador será a soma dos números pares subtraído dos números impares.
IMPAR: Os números impares dos 3 números escolhidos serão bonificação e os números pares serão penalização. Então a pontuação do jogador será a soma dos números impares subtraído dos números pares.
Implemente um programa que recebe os 3 números escolhido por cada jogado e o valor do pivô. Imprima quem ganhou e sua pontuação e em caso de empate, imprima Empate.*/
#include <stdio.h>

int main(){
    int a1, a2, a3, b1, b2, b3, pivo;
    int posA = 0, posB = 0, negA = 0,negB = 0;
    
    scanf("%d %d %d", &a1, &a2, &a3);
    scanf("%d %d %d", &b1, &b2, &b3);
    scanf("%d", &pivo);
    
    if(pivo%2 == 0){//caso número seja par
        
        //atribuir valor ao jogador A
        if(a1%2==0){
            posA = posA + a1; 
        }else{
            negA = negA + a1;
        }
        
        if(a2%2==0){
            posA = posA + a2; 
        }else{
            negA = negA + a2;
        }
        
        if(a3%2==0){
            posA = posA + a3; 
        }else{
            negA = negA + a3;
        }
        
        
        //Atribuir valor ao jogador B
         if(b1%2==0){
            posB = posB + b1; 
        }else{
            negB = negB + b1;
        }
        
        if(b2%2==0){
            posB = posB + b2; 
        }else{
            negB = negB + b2;
        }
        
        if(b3%2==0){
            posB = posB + b3; 
        }else{
            negB = negB + b3;
        }
        
    }else{//caso o número seja impar
        if(a1%2!=0){
            posA = posA + a1; 
        }else{
            negA = negA + a1;
        }
        
        if(a2%2!=0){
            posA = posA + a2; 
        }else{
            negA = negA + a2;
        }
        
        if(a3%2!=0){
            posA = posA + a3; 
        }else{
            negA = negA + a3;
        }
        
        
        //Atribuir valor ao jogador B
         if(b1%2!=0){
            posB = posB + b1; 
        }else{
            negB = negB + b1;
        }
        
        if(b2%2!=0){
            posB = posB + b2; 
        }else{
            negB = negB + b2;
        }
        
        if(b3%2!=0){
            posB = posB + b3; 
        }else{
            negB = negB + b3;
        }
        
    }//final da verificação de atribuição
    
    if((posA - negA) == (posB - negB)){
        printf("Empate");
    }else if((posA - negA) > (posB - negB)){
        printf("Jogador1 %d ", posA - negA);
    }else{
        printf("Jogador2 %d ", posB - negB);
    }
    return 0;
}