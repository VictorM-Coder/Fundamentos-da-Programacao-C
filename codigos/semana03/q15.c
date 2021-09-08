/*Numa escola de natação, existe diversas categoria que uma criança pode ser inserida de acordo com sua idade. As categorias existentes estão na tabela abaixo:

Categorias
Idade	Categoria
Até 3 anos	fralda
Até 5 anos	baby
Até 7 anos	kid 
Até 12 anos	juvenil
Até 19 anos	jovem
Acima de 19 anos	nao permitido
Implemente um programa que recebe a idade do aluno e imprime a categoria do mesmo.*/
#include <stdio.h>

int main(){
    
    int ent;
    scanf("%d", &ent);
    
    if(ent <=3){
        printf("fralda");
    }else if( ent <=5){
        printf("baby");
    }else if(ent <= 7){
        printf("kid");
    }else if(ent <= 12){
        printf("juvenil");
    }else if(ent <=19){
        printf("jovem");
    }else{
        printf("nao permitido");
    }
    
    return 0;
}