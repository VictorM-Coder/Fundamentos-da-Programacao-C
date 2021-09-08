/*Cara ou Coroa é um jogo simples, que consiste em se atirar uma moeda ao ar para então verificar qual de seus lados ficou voltado para cima após sua queda, que pode ser o cara ou coroa. 



Teremos uma disputa de 9 lançamento do cara ou coroa. Aquele que aparece mais vezes ganha.

Implemente um programa que irá receber o resultado de cada lançamento da moeda, uma por vez, sendo 1 para cara e 0 para coroa. Imprima quem ganhou a disputa: Cara ou Coroa.*/
#include <stdio.h>

int main(){
    int coTot = 0, caTot = 0;
    
    for(int cont =0; cont <9; cont++){
        int rod;
        scanf("%d", &rod);
        
        (rod == 0)? coTot++:caTot++;
    }
    
    if(coTot > caTot){
        printf("Coroa");
    }else{
        printf("Cara");
    }
    
    return 0;
}