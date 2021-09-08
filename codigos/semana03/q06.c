//Implemente um programa que recebe dois números inteiros e imprime o maior.
#include <stdio.h>

int main(){
    int ent1, ent2;
    
    scanf("%d %d", &ent1, &ent2);
    
    if(ent1>ent2){
        printf("%d", ent1);
    }else{
        printf("%d", ent2);
    }
    
    return 1;
}