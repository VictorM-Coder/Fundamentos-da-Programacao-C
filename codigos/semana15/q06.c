/*Implemente uma função que recebe um vetor de inteiros e devolve o maior valor do vetor.

PROFESSOOOR, COMO PASSAMOS VETOR COMO PARÂMETRO NUMA FUNÇÃO?????????

É bem simples jovem mancebo. Temos duas formas de fazer isso. Vou mostrar para outra questão: Uma função que recebe um vetor de inteiro e retorna a soma dos seus elementos.

int soma_vetor(int vet[]){
...
}

Observe que nos parâmetros, colocamos como se estivesse declarando um vetor, mas sem colocar o tamanho. Então uma pergunta muito importante é: como saber o tamanho do vetor? Pois bem, para isso, iremos definir outro parâmetro:

int soma_vetor(int vet[], int n){
...
}

Aqui temos dois parâmetros, um vetor de inteiro e um inteiro. O inteiro irá representar o tamanho do vetor. ATENÇÃO!!!!!! Não é obrigatório ter esse parâmetro inteiro para definir um vetor nos parâmetros, só que sem ele, não saberemos o tamanho do vetor.

A outra forma seria usando o conceito de ponteiros, mas deixarei para explicar na aula sobre ponteiros.

Então dentro da função, teremos um vetor de inteiros de nome vet e um inteiro de nome n. Veja como fica a função:

int soma_vetor(int vet[], int n){
     int soma = 0;
     for(int i = 0; i < n; i++)
         soma += vet[i];
     return soma;
}

Implemente um programa que recebe um vetor de inteiros e usando a função, imprime o maior elemento do vetor.*/
#include <stdio.h>

int maiorValor(int vet[], int tam){
    int maior = vet[0];
    
    for(int cont =1; cont < tam; cont++){
        if(vet[cont] > maior){
            maior = vet[cont];
        }
    }
    return maior;
}
int main(){
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    int saida = maiorValor(vet, tam);
    printf("%d", saida);
    return 0;
}