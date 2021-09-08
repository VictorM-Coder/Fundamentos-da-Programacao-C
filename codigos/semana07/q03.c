//Implemente um programa que recebe 21 números inteiros e calcule e imprima a média desses 21 números.
#include <stdio.h>

int main(){
    int tot = 0;
    for(int cont = 1; cont <=21; cont++){
        int ent;
        scanf("%d", &ent);
        tot += ent;
    }
    float media = tot/21.0;
    printf("%.2f", media);
    
    return 0;
}