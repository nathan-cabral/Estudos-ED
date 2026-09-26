#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int * vh=(int *)calloc(10,sizeof(int));
    free(vh);
    vh=NULL;

    return 0;
}