/*ATENÇÃO!!!!!! SÓ FAÇA ESSA QUESTÃO SE VOCÊ FEZ A VERSÃO 1 DA BUSCA LINEAR.

Nessa versão da busca linear, não teremos a chave de busca como um valor, mas uma propriedade que os números devem ter. Por exemplo, os números serem par, ou impar.

Teremos 4 propriedades pré definidas. Abaixo listo as propriedades com o código que irá identifica-lá:

1 - Impar

2 - Par

3 - Positivo

4 - Negativo

Implemente um programa que irá receber um vetor de inteiros e depois o código da propriedade, de acordo com a lista acima. Gere um vetor resultante contendo os números encontrados que respeitam a propriedade. Imprima esse vetor resultante.

ATENÇÃO!!!!!!! 2: OBRIGATORIAMENTE VC DEVE CRIAR OS DOIS VETORES, O PRIMEIRO PARA ARMAZENAR O VETOR DE ENTRADA E O SEGUNDO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO SEGUNDO VETOR.*/
#include <stdio.h>

int main(){
    int tam;
    scanf("%d", &tam);
    
    int vet[tam];
    for(int cont = 0; cont< tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    
    int tipo;
    scanf("%d", &tipo);
    int resul[tam];
    int aux =0;
    
    for(int cont = 0; cont < tam; cont++){
        if(tipo==1){//impar
            if(vet[cont]%2 != 0){
                resul[aux] = vet[cont];
                aux++;
            }
            
        }else if(tipo==2){
            if(vet[cont]%2==0){
                resul[aux] = vet[cont];
                aux++;
            }
            
        }else if(tipo ==3){
            if(vet[cont] > 0){
                resul[aux] = vet[cont];
                aux++;
            }
            
        }else{
            if(vet[cont] < 0){
                resul[aux] = vet[cont];
                aux++;
            }
            
        }//fim if externo
    }//fim for
    
    for(int cont = 0; cont < aux; cont++){
        printf("%d ", resul[cont]);
    }
    
    return 0;
}