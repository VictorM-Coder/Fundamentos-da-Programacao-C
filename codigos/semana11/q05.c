/*No ocidente, a sequência de Fibonacci apareceu pela primeira vez no livro Liber Abaci(1202) de Leonardo Fibonacci embora ela já tivesse sido descrita por gregos e indianos. Fibonacci considerou o crescimento de uma população idealizada (não realista biologicamente) de coelhos. Os números descrevem o número de casais na população de coelhos depois de n meses se for suposto que:

No primeiro mês nasce apenas um casal;
casais amadurecem sexualmente (e reproduzem-se) apenas após o segundo mês de vida;
não há problemas genéticos no cruzamento consaguíneo;
todos os meses, cada casal fértil dá a luz a um novo casal, e;
os coelhos nunca morrem.

Sendo Fn a quantidade de casais após n meses, faça um programa que, dado um inteiro positivo n >= 1, calcule o n-ésimo termo da sequência de Fibonacci

Deve-se usar While.*/
#include <stdio.h>

int main(){
    int ant2 = 1, ant1 =1, resul;
    int ent;
    
    scanf("%d", &ent);
    
    if(ent == 1 || ent == 2){
        printf("1");
    }else{
        
        int ini = 2;
        while(ini < ent){
            resul = ant1 + ant2;
            ant2 = ant1;
            ant1 = resul;
            
            
            ini++;
        }
        printf("%d", resul);
    }
    
    
    return 0;
}