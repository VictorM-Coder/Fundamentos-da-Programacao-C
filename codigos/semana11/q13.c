/*Pesquisa Operacional ou Otimização é uma área da ciência da computação que trata em resolver problemas chamado de Problema de Otimização. Esses são problemas que cada solução tem um valor associado e deseja-se encontrar a solução que tem o menor (problema de minimização) ou maior (problema de maximização) valor.

Um desses problemas é o chamado de problema de formação de equipes sociais, que consiste em formar uma equipe que possua a melhor relação interpessoal. Para isso, calcula-se o fator de sociabilidade, um número entre 1 a 100, que indica o quanto a pessoa é sociável. Estudos do instituto de pesquisa Tabajara comprovam que pessoas que possuem fator de sociabilidade iguais ou próximos, independente do valor, tentem a se darem bem. Exemplo, Temos 4 pessoas com fator de sociabilidade 45, 39, 10, 20, então as pessoas 1 e 2 terão mais chances de se darem bem em uma equipe.

Uma empresa precisa selecionar duas pessoas para formar uma equipe em um projeto e deseja selecionar essas duas pessoas de acordo com o estudo do instituto Tabajara.

Com isso, implemente um programa que recebe n números inteiros que indicam o fator de sociabilidade das n pessoas da empresa e devolva as duas pessoas com os fator de sociabilidade mais próximas. 

Considere que o primeiro fator de sociabilidade informado é da pessoa 1, o segunda da pessoa 2 e assim sucessivamente.

Imprima primeiro a pessoa de menor código, ou seja, 2 9 e não 9 2.*/
#include <stdio.h>
#include <math.h>

int main(){
    int tam, pessoa1, pessoa2;
    scanf("%d", &tam);
    
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    int dif = 100;
    for(int cont = 0; cont < tam; cont++){
  
        for(int c1 = (cont +1); c1 < tam; c1++){
            int difRod = abs(vet[cont] - vet[c1]);
            if(dif > difRod ){
                dif = difRod;
                pessoa1 = (cont +1);
                pessoa2 = c1 + 1;
            }
        }
    }
    
    printf("%d %d", pessoa1, pessoa2);
    
    return 0;
}