/*Implemente um programa que recebe dois conjuntos de inteiros e imprima Contido se o primeiro conjunto está contido no segundo (todos os elementos do primeiro estão no segundo) ou Nao contido, caso contrário.*/
#include <stdio.h>

int main(){
    
    int rod1, rod2, check =1;
    
    scanf("%d", &rod1);
    int vet1[rod1];
    
    for(int cont = 0; cont < rod1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &rod2);
    int vet2[rod2];
    
    for(int cont = 0; cont < rod2; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    for(int c1 =0; c1 < rod1; c1++){
        
        int totDif =0;
        for(int c2 =0; c2 < rod2; c2++){
           if(vet1[c1]!=vet2[c2]){
               totDif++;
           } 
        }//fim for interno
        
        if(totDif == rod2){
            check = 0;
            break;
        }
    }//fim for externo
    
    if(check){
        printf("Contido");
    }else{
        printf("Nao contido");
    }
    
    
    return 0;
}