/*Você irá receber uma pesquisa de preços de n produtos da cesta básica que foi realizada em m supermercados. Deseja-se saber para cada produto, o menor preço encontrado.

Implemente um programa que recebe essa pesquisa e imprime o menor preço de cada produto.

Os preços dos produtos devem ser armazenado numa matriz de float de dimensão n x m.

Crie um vetor de tamanho n que irá armazenar o menor preço de cada produto. (Obrigatoriamente, você precisa criar esse vetor e só depois imprimir).

O programa irá receber na mesma linha a quantidade de produtos e a quantidade de supermercados. Nas próximas linhas, serão fornecidas os preços do produtos, onde na primeira linha serão os preços do primeiro produto nos m supermercados. Na segunda linha serão os preços do segundo produto nos m supermercados, e assim sucessivamente.*/
#include <stdio.h>
#include <limits.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    float mat[n][m], vet[n];
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            scanf("%f", &mat[lin][col]);
        }
    }
    
    for(int lin = 0; lin < n; lin++){
        vet[lin] = INT_MAX;
        
        for(int col = 0; col < m; col++){
           if(mat[lin][col] < vet[lin]){
               vet[lin] = mat[lin][col];
               
           }
        }
    }
    
    for(int lin = 0; lin < n; lin++){
        printf("%.2f ", vet[lin]);
    }
    
    
    return 0;
}