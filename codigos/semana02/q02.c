/*Em muitas situações do dia a dia, é necessário converter um tempo em segundos para horas e minutos.

Implemente um programa que recebe um tempo em segundos e transformar no formato:

Hora:Minuto:Segundo*/
#include <stdio.h>

void main(){
    int seg, min, hor;
    
    scanf("%d", &seg);
    
    hor = seg/3600;
    min = (seg - hor * 3600)/60;
    seg = seg - ((min * 60) + (hor * 3600));
    
    printf("%d:%d:%d", hor, min, seg);
}