#include<stdio.h>
void soma(int x,int y, int* sum,int* sub,int* div,int* mult){
    *sum=x+y;
    *sub=x-y;
    *div=x/y;
    *mult=x*y;
}

/*
mesmo nao retornando nada é possivel alter o valor de uma var
    dentro da main pela passagem por referencia
*/ 

// bastante usada quandon se quer "retornar" mais de um valor
int main(){

    int x=100;
    int y=20;
    int sum,sub,div,mult;
    soma(x,y,&sum,&sub,&div,&mult);
    printf("soma=%d\n",sum);
    printf("sub=%d\n",sub);
    printf("div=%d\n",div);
    printf("mult=%d\n",mult);

    return 0;
}