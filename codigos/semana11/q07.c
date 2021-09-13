/*Implemente um programa que receba dois conjuntos de inteiros e realize a operação de diferença simétrica. A diferença simétrica são os elementos contidos no primeiro conjunto mas não estão no segundo e os elementos contidos no segundo mas não estão no primeiro.

Vamos considerar que no conjunto diferença pode conter elementos repetidos.

ATENÇÃO!!!!: Você obrigatoriamente devem armazenar o conjunto interseção no vetor e só depois imprimi-lo.*/
#include <stdio.h>

int main(){
    int n1, n2, tam =0;
    
    scanf("%d", &n1);
    int vet1[n1];
    
    for(int cont = 0; cont < n1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &n2);
    int vet2[n2];
    
    for(int cont = 0; cont < n2; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    int vetDif[n1 + n2];
    
    for(int c1 = 0; c1 < n1; c1++){
        int totDif = 0;
        for(int c2 = 0; c2< n2;c2++){
            if(vet1[c1] == vet2[c2]){
                break;
            }else{
                totDif++;
            }
        }
        
        if(totDif == n2){
            vetDif[tam] = vet1[c1];
            tam++;
        }
    }
    
    for(int c2 = 0; c2 < n2; c2++){
        int totDif = 0;
        for(int c1 = 0; c1< n1;c1++){
            if(vet1[c1] == vet2[c2]){
                break;
            }else{
                totDif++;
            }
        }
        
        if(totDif == n1){
            vetDif[tam] = vet2[c2]; 
            tam++;
        }
    }
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vetDif[cont]);
    }
    return 0;
}