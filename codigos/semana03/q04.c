//Implemente um programa que recebe um número inteiro e diga se ele é par ou impar.
#include <stdio.h>

int main(){
   int ent;
   
   scanf("%d", &ent);
   
   if(ent%2 == 0){
       printf("PAR");
   }
   
   if(ent%2 != 0){
       printf("IMPAR");
   }
   return 1; 
}