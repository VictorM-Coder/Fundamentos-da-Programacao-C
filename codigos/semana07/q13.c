/*Encontre o maior valor dentre n números inteiros. 

Você irá receber do usuário o valor de n e depois n números inteiros e o maior valor dentre esses n números informados.*/
#include <stdio.h>

int main(){
    int rod, maior;
    scanf("%d", &rod);
    
    for(int cont =1; cont <= rod; cont++){
        int ent;
        scanf("%d", &ent);
        
        if(cont == 1){
            maior = ent;
        }else{
            if(maior < ent){
                maior = ent;
            }
        }
        
    }
    
    printf("%d", maior);
    
    return 0;
}