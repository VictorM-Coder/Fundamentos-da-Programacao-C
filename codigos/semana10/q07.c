/*Implemente um programa que irá receber dois conjuntos de inteiros e obtenha a diferença entre o primeiro conjunto com o segundo. A diferença entre dois conjuntos são os elementos contidos no primeiro que não estão no segundo. 

Imprima o conjunto diferença.

Vamos considerar que no conjunto diferença pode conter elementos repetidos.

Dica: O tamanho do vetor diferença será no máximo o tamanho do primeiro vetor.

ATENÇÃO!!!!: Você obrigatoriamente devem armazenar o conjunto diferença no vetor e só depois imprimi-lo.*/
#include <stdio.h>

int main(){
    int r1, r2;
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int cont = 0; cont < r1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &r2);
    int vet2[r2];
    int vetD[r1];
    
    for(int cont = 0; cont < r2; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    int au =0;
    for(int c1 = 0; c1 < r1; c1++){
        int totDif =0;
        for(int c2 = 0; c2 < r2; c2++){
            if(vet1[c1] != vet2[c2]){
                totDif++;
            }
        }//fim for interno
        if(totDif == r2){
            vetD[au] = vet1[c1];
            au++;
        }
    }//fim for externo
    
    for(int cont =0; cont < au; cont++ ){
        printf("%d ", vetD[cont]);
    }
    
    return 0;
}