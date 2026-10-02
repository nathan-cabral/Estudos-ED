#include<stdio.h>

void imprime(int x,char c){
    if(x==0)return;
    printf("%c\n",c);
    return imprime(x-1,c);
}

int main(){
    int x;char c;
    scanf("%d",&x);
    scanf(" %c",&c);
    imprime(x,c);
    return 0;
}