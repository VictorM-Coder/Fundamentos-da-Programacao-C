/*Suponha uma eleição com 3 candidatos e queremos um programa que receba a quantidade de votos de cada candidato e indique se haverá ou não segundo turno.

Haverá segundo turno numa eleição se a quantidade de votos do primeiro lugar for menor ou igual a metade dos totais de votos.

O programa irá receber a quantidade de votos dos 3 candidatos. E a saída será Segundo Turno se haverá segundo turno ou Primeiro Turno se não houver o segundo turno.*/
#include <stdio.h>

int main(){
    int v1, v2 , v3, mt;
    
    scanf("%d %d %d", &v1, &v2, &v3);
    mt = (v1 +  v2 + v3)/2;
    
    if(v1 > mt || v2 > mt || v3 > mt){
        printf("Primeiro Turno");
    }else{
        printf("Segundo Turno");
    }
    
    
    
    return 0;
}