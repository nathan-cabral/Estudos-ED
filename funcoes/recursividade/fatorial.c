#include<stdio.h>

int fat(int n){
    if(n<1)return 1;
    return n*fat(n-1);
}

int val(){

    int n;
    printf("fatorial de: ");
    scanf("%d",&n);
    return n;
}


int main(){
    int f=val();
    fat(f);
    printf("%d",fat(f));

    return 0;
}