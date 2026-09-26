#include<stdio.h>
#include<stdlib.h>


int main(){

    int m[2][3]={{1,2,3},{1,2,3}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("&M[%d][%d]=%p\n",i,j,&m[i][j]);
        }
    }
    return 0;
}