#include<stdio.h>
void fun1(int n);
void fun2(int n);

void fun1(int n){
    if(n>0){
        printf("A=%d\n",n);
        fun2(n-1);
    }
}

void fun2(int n){
    if(n>0){
        printf("B=%d\n",n);
        fun1(n-1);
    }
}

int main(){
    fun1(30);
    return 0;
}