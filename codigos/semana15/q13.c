/*Uma loja online deseja pesquisa qual produto em seu site possui preço mais próximo do desejado pelo cliente, para isso, o cliente informa o valor que ele gostaria de pagar e o site informa o valor mais próximo encontrado.

Implemente um programa que recebe um vetor com os valores dos preços dos produtos do site e o preço que o cliente deseja pagar, o programa deve retornar o preço mais próximo do desejado pelo cliente.

Você deve implementar uma função que recebe um vetor de preços (float) e o preço desejado pelo cliente e retorna o preço mais próximo do desejado. Sua função deve ter a seguinte estrutura: 

float get_preco_proximo(float precos, int n, float preco_desejado)

Você deve também implementar a função que calcula a diferença absoluta entre dois números. 

float modulo(float a, float b)*/
#include <stdio.h>

float modulo(float a, float b){
    float sub = a-b;
    if(sub >= 0){
        return sub;
    }else{
        return sub*-1;
    }
    
}

float getPrecoProx(float precos[], int tam, float precoDes){
    float dif = modulo(precos[0], precoDes);
    float precoP = precos[0];
    
    for(int cont = 1; cont < tam; cont++){
        
        float difRod =modulo(precos[cont], precoDes);
        
        if(dif > difRod){
            dif = difRod;
            precoP = precos[cont];
        }
    }
    
    return precoP;
}
int main(){
    int tam;
    scanf("%d", &tam);
    float vet[tam], precoDes;

    for(int cont = 0; cont < tam; cont++){
        scanf("%f", &vet[cont]);
    }
    scanf("%f", &precoDes);
    
    float prox = getPrecoProx(vet, tam, precoDes);
    
    printf("%.2f", prox);
    
    return 0;
}