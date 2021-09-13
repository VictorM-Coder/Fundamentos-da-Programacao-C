/*Implemente um programa que recebe dois vetores de inteiros de mesmo tamanho (não precisa verificar se realmente tem o mesmo tamanho, suponha que sim), e um char contendo um dos quatro operadores matemáticos (+, -, *, /) e crie um novo vetor de inteiros onde os elementos desse novo vetor é a execução da operação contida no char nos elementos dos dois vetores , posição a posição. Ou seja, o primeiro elemento do vetor resultante será o resultado da operação do primeiro elemento dos dois vetores de entrada. O segundo elemento do vetor resultante será o resultado da operação do segundo elemento dos dois vetores. E assim sucessivamente.

ATENÇÃO: OBRIGATORIAMENTE VOCÊ DEVE CRIAR UM NOVO VETOR CONTENDO O RESULTADO DA OPERAÇÃO E SÓ DEPOIS IMPRIMIR ESSE VETOR. CASO CONTRÁRIO A RESOLUÇÃO SERÁ DESCONSIDERADA.

Não se preocupe, no caso da / (divisão), os dados de entradas serão múltiplos para o resultado ser inteiro.*/
#include <stdio.h>

int main(){
    int tam;
    
    scanf("%d", &tam);
    int vet1[tam], vet2[tam], resul[tam];
    
    for(int cont  =0; cont < tam; cont++){
        scanf("%d", &vet1[cont]);    
    }
    
    for(int cont  =0; cont < tam; cont++){
        scanf("%d", &vet2[cont]);    
    }
    
    char operacao;
    scanf("\n%c", &operacao);
    
    switch (operacao){
        case '+':
            for(int cont = 0; cont < tam; cont++){
                resul[cont] = vet1[cont] + vet2[cont];
            }
            break;
            
        case '-':
            for(int cont = 0; cont < tam; cont++){
                resul[cont] = vet1[cont] - vet2[cont];
            }
            break;
            
        case '/':
            for(int cont = 0; cont < tam; cont++){
                resul[cont] = vet1[cont] / vet2[cont];
            }
            break;
            
        case '*':
            for(int cont = 0; cont < tam; cont++){
                resul[cont] = vet1[cont] * vet2[cont];
            }
            break;
    }
    
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", resul[cont]);
    }
    return 0;
}