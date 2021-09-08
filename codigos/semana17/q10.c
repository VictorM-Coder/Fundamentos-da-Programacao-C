/*
Implemente a seguinte função recursiva:

https://moodle2.quixada.ufc.br/pluginfile.php/21342/mod_vpl/intro/FuncaoRecursiva.jpg
*/
#include <stdio.h>

int func(int m, int n){
    if(m == 1 || n == 1){
        if(n == 1){
            return m + 1;
        }
        if(m == 1){
            return n +1;
        }
    }else{
        return func(m, (n-1)) + func((m - 1), n);
    }
    
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int saida = func(m, n);
    printf("%d", saida);
    
    return 0;
}