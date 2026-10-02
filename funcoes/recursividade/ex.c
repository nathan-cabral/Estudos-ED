#include<stdio.h>

// void imprime(int x,char c){
//     if(x==0)return;
//     printf("%c\n",c);
//     return imprime(x-1,c);
// }

// int main(){
//     int x;char c;
//     scanf("%d",&x);
//     scanf(" %c",&c);
//     imprime(x,c);
//     return 0;
// }

// float media(int s,int q){
//     int n;
//     scanf("%d",&n);
//     while(n!=0){
//         q++;
//         s+=n;
//         scanf("%d",&n);
//     }
//     return (float)s/q;
// }


// int main(){
//     int s=0,q=0;
//     float m=media(s,q);
//     printf("%f\n",m);

//     return 0;
// }


// int verifica(char *string, char c){
//     if(string[0]==c)
//         return 1;
//     if(string[0]=='\0')
//         return 0;
//     return verifica(string+1,c);
// }


// void main(){
//     char string[]="meu nome nao eh lalalal";
//     char c='n';
//     printf("N esta na string? %d\n",verifica(string,c));
// }