#include<stdio.h>
#include<stdlib.h>

void somaEscalar(int vec[],int n,int esc){
    for(int i=0;i<n;i++){
        vec[i]+=esc;
    }
}

void valorEscalar(int* esc){
    printf("Valor do Escalar: ");
    scanf("%d",esc);
}

void printVetor(int vec[],int n){
    for(int i=0;i<n;i++){
        printf("v[%d]=%d\n",i,vec[i]);
    }
}

int main(){

    int v[5]={1,2,3,4,5};
    int esc;
    puts("### VETOR ANTES DO ESCALAR");
    printVetor(v,5);
    valorEscalar(&esc);
    somaEscalar(v,5,esc);
    puts("### VETOR DEPOIS DO ESCALAR");
    printVetor(v,5);

    return 0;
}                