/*Implemente um programa que recebe dois vetores de inteiros e imprime Inverso se os vetores são o inverso um do outro. Caso contrário imprima Nao Inverso. 

Para que dois vetores sejam o inverso um do outro eles precisam ter o mesmo tamanho e a ordem dos elementos do primeiro tem que ser o inverso do segundo (ou vice versa). Veja os exemplos abaixo.*/
#include <stdio.h>

int main(){
    int r1, r2, check =1;
    
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int cont = 0; cont < r1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &r2);
    int vet2[r2];
    
    for(int cont = 0; cont < r2; cont++){
        scanf("%d", &vet2[cont]);
    }
    if(r1  == r2){
        r2-= 1;
        for(int c1 =0; c1 <r1; c1++){
            
            for(int c2 = (r2 -c1); c2 >= 0; c2--){
                if(vet1[c1] == vet2[c2]){
                    break;
                }else{
                   check = 0;
                   break;
                }
            }//fim for interno
            if(check == 0){
                break;
            }
            
        }//fim for externo
    }else{
        check =0;
    }
    
    
    if(check ==1){
        printf("Inverso");
    }else{
        printf("Nao Inverso");
    }
    return 0;
}