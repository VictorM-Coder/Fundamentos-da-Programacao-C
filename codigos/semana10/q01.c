/*Em matemática, um par ordenado (a, b) é um par de objetos matemáticos cuja ordem de ocorrência desses objetos é significante. Consiste de dois elementos, digamos a e b, dos quais um, digamos a, é designado como primeiro elemento e o outro como segundo elemento. Fonte: Wikipedia.

Dados dois vetores de inteiros de tamanho distintos, gere todos os pares ordenados entre os elementos do primeiro vetor com os elementos do segundo vetor, garantindo que o primeiro elemento do par ordenado seja do primeiro vetor e o segundo elemento do par ordenado seja do segundo vetor.

O primeiro números será o tamanho do primeiro vetor e depois os números do primeiro vetor. Depois será fornecido o tamanho do segundo vetor e seus números.

Observe nos exemplos de entrada a formatação exigida na saída dos dados. */
#include <stdio.h>

int main(){
    int r1, r2;
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int c = 0; c < r1; c++){
        scanf("%d", &vet1[c]);
    }
    
    scanf("%d", &r2);
    int vet2[r2];
    
    for(int c = 0; c < r2; c++){
        scanf("%d", &vet2[c]);
    }
    
    
    for(int c1 =0; c1 < r1; c1++){
        for(int c2 =0; c2 < r2; c2++){
            printf("(%d,%d)", vet1[c1], vet2[c2]);
        }
    }
    
    return 0;
}