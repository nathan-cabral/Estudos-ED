#include<stdio.h>

int main(){
    int v[10];
    for(int i=0;i<10;i++){
        v[i]=i+1;
    }
    for(int i=0;i<10;i++){
        printf("V[%d]=%d\n",i,v[i]);
    }

    // acessando elementos

    // usando idex:
    printf("%d\n",v[3]);

    // nao usando idex:
    printf("%d\n",(*v+3));
    printf("%d\n",*v+3);

    return 0;
}