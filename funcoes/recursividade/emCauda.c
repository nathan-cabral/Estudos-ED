#include<stdio.h>
// gasto menor de memoria do que uma recursao direta default 
int fatAux(int n,int acumulador){
    if(n<1)return acumulador;
    return fatAux(n-1,n*acumulador);
}
int fat(int n){
    return fatAux(n-1,1);
}

int main(){
    printf("fatorial de 5: %d\n",fat(5)*5);

    return 0;
}