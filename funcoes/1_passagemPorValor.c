#include<stdio.h>
int soma(int a, int b){
    return a+b;
}
int main(){
    int a=100000000;
    int b=200000000;
    int c=0;

    puts("ANTES DE CHAMAR A FUNCAO:");
    printf("&a=%p, a=%d\n",&a,a);
    printf("&b=%p, b=%d\n",&b,b);
    printf("&c=%p, c=%d\n",&c,c);

    // chamada da funcao:
    c=soma(a,b);

    puts("DEPOIS DE CHAMAR A FUNCAO");
    printf("&a=%p, a=%d\n",&a,a);
    printf("&b=%p, b=%d\n",&b,b);
    printf("&c=%p, c=%d\n",&c,c);   
    return 0;
}