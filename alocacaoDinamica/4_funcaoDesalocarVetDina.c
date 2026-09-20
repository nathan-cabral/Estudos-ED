#include<stdio.h>
#include<stdlib.h>
int tamanhoVet(){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    return n;
}

void lerVet(int v[],int n){
    for(int i=0;i<n;i++){
        printf("V[%d]=",i);
        scanf("%d",&v[i]);
    }
}

void printVet(int v[],int n){
    for(int i=0;i<n;i++){
        printf("V[%d]=%d\n",i,v[i]);
    }
}

void desalocar(int v[]){
    free(v);
    v=NULL;
}

int main(){
    int n=tamanhoVet();
    int* vh=(int*) calloc(n,sizeof(int));
    lerVet(vh,n);
    printVet(vh,n);
    desalocar(vh);

    return 0;
}