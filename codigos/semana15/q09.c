/*Implemente uma função que receba um vetor de inteiro e dois ponteiros de int, e encontre o menor e maior elemento do vetor e utilize os ponteiros para retornar esses dois valores.

Utilize o seguinte protótipo para a função:
void mm_vetor(int numeros[], int n, int *menor, int *maior);

Na função main, na chamada da função mm_vetor, passe o endereço de duas variáveis inteiras nos ponteiros menor e maior.

Imprima o menor e maior valor "retornado" pela função.*/
#include <stdio.h>

void mm_vetor(int num[], int tam, int *menor, int *maior){
    int ma = num[0];
    int me = num[0];
    
    for(int cont=0; cont<tam;cont++){
        int rod = num[cont];
        
        if(rod > ma){
            ma = rod;
        }
        if(rod < me){
            me = rod;
        }
    }
    
    *menor = me;
    *maior = ma;
}
int main(){
    
    int maior, menor;
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont< tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    mm_vetor(vet, tam, &menor, &maior);
    
    printf("%d %d", menor, maior);
    return 0;
}