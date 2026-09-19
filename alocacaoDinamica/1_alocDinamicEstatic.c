#include<stdio.h>
#include<stdlib.h>

int main(){

    // alocacao vetor estático (memoria stack)
    int vS[4]={1,2,3,4};
    puts("### VETOR ESTATICO");
    for(int i=0;i<4;i++){
        printf("&vS[%d]=%p , vS[%d]=%d\n",i,&vS[i],i,vS[i]);
    }

    puts("\n");

    //alocacao vetor dinamico (memoria heap)

    //usando malloc
    int * vh_mal=(int*)malloc(4*sizeof(int));
    // todos os elementos possuem lixo de memoria
    puts("### VETOR DINAMICO COM MALLOC");
    for(int i=0;i<4;i++){
        printf("&vh_mal[%d]=%p, vh_mal[%d]=%d\n",i,&vh_mal[i],i,vh_mal[i]);
    }
    // observe o lixo de memoria presente 

    puts("\n");

    //usando calloc
    int * vh_cal=(int*)calloc(4,sizeof(int));
    // todos os elementos possuem lixo de memoria
    puts("### VETOR DINAMICO COM CALLOC");
    for(int i=0;i<4;i++){
        printf("&vh_cal[%d]=%p, vh_cal[%d]=%d\n",i,&vh_cal[i],i,vh_cal[i]);
    }
    // observe que os elementos comecam com 0, valor NULL, sem lixo de memoria

    // nao desalocamos os vetores dinamicos!!
    return 0;
}