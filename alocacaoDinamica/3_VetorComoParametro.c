#include<stdio.h>
#include<stdlib.h>

void valorEscalar(int* esc){
    printf("Valor do Escalar: ");
    scanf("%d",esc);
}

void somarComEscalar(int vec[],int n,int esc){
    for(int i=0;i<n;i++){
        vec[i]+=esc;
    }
}

void printarVetor(int vec[],int n){
    for(int i=0;i<n;i++){
        printf("V[%d]=%d\n",i,vec[i]);
    }
}

int main(){
    int v[5]={5,4,3,2,1};
    int esc;
    valorEscalar(&esc);
    puts("### ESTATICO ANTES DO ESCALAR");
    printarVetor(v,5);
    somarComEscalar(v,5,esc);
    puts("### ESTATICO DEPOIS DO ESCALAR");
    printarVetor(v,5);

    puts("\n");

    // dinamico usando calloc 
    int* vh=(int *)calloc(5,sizeof(int));
    puts("### DINAMICO ANTES DO ESCALAR");
    printarVetor(vh,5);
    somarComEscalar(vh,5,esc);
    puts("### DINAMICO DEPOIS DO ESCALAR");
    printarVetor(vh,5);    

    // desalocando o vetor dinamico
    free(vh);
    vh=NULL;

    return 0;
}