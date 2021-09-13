/*Implemente um programa que recebe dois conjuntos de inteiros e imprima a interseção entre os conjuntos.

ATENÇÃO!!!!: Você obrigatoriamente devem armazenar o conjunto interseção no vetor e só depois imprimi-lo.

A ordem dos elementos do conjunto interseção no vetor deve ser a mesma relativamente ao primeiro conjunto. Não considere números repetidos. É garantido que no primeiro vetor não teremos números repetidos.

Vejamos o exemplos: {2, 5, 4, 3} ∩ {2, 4} = {2, 4}, {7, 5, 2} ∩ {7, 9, 4, 7, 2, 7} = {7, 2}.

Dica: O tamanho do vetor interseção será no máximo o tamanho do menor vetor entre os dois vetores de entrada.*/
#include <stdio.h>

int main(){
    int r1, r2;
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int cont =0; cont < r1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &r2);
    int vet2[r2];
    
    for(int cont =0; cont < r2; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    int tam;
    if(r1 > r2){
        tam = r2;
    }else{
        tam =r1;
    }
    int vetI[tam];
    
    int au =0;
    for(int c1 =0; c1 <r1; c1++){
        for(int c2 =0; c2 < r2; c2++){
            if(vet1[c1] == vet2[c2]){
                vetI[au] = vet1[c1];
                au++;
                break;
            }//fim if
        }//fim for interno
    }//fim for externo
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vetI[cont]);
    }
    
    return 0;
}