/*Existem duas formas de classificar os triângulos, que são independentes entre si. Uma delas leva em consideração o comprimento de cada lado do triangulo. 

Sabemos que três números representam os comprimentos dos lados de um triângulo quando a soma de dois números sempre é maior ou igual ao terceiro, isso para qualquer dois números.

Escreva um programa que receba três números inteiros e verifique se esses números representam os comprimento dos lados de um triângulo. Caso positivo, verifique qual tipo de triângulo ele representa e imprima o seguinte código de acordo com cada tipo: equilátero (EQ), isósceles (IS), escaleno (ES). Caso ele não represente um triângulo, imprima NT. Veja a figura abaixo para saber como identificar os tipos de triângulos.*/
#include <stdio.h>

int main(){
     int l1, l2, l3;
     
     scanf("%d %d %d", &l1, &l2, &l3);
     
     if(!(((l1 + l2 < l3) || (l3 + l2 < l1)) || (l1 + l3 < l2))){
         if( l1 == l2 && l2 == l3){
             printf("EQ");
         }else if(l1 == l2 || l2 == l3 || l3 == l1){
             printf("IS");
         }else{
             printf("ES");
         }
     }else{
         printf("NT");
     }
    return 0;
}