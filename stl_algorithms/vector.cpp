#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Base

    // vector
    vector<int>v0={1,2,3,4,5}; // inicializado

    vector<int>v1; // vazio

    vector<int>v2(4); // 10 posicoes

    vector<int>v3(10,5); // 10 posicoes, todas contendo 5


    // funcoes para vector

    // push back: adidiona no final
    v0.push_back(10);

    // pop back: remove o ultimo
    v0.pop_back();

    // size: retorna a quantidade de elementos
    cout<<v0.size();

    // empty: verifica se esta vazio
    if(v0.empty())cout<<"vazio\n";

    // front: primeiro elemento
    v0.front();

    // back: ultimo elemento
    v0.back();

    // clear: apaga tudo
    v0.clear();

    // resize: muda o tamanho
    v0.resize(11);

    // begin: iterador para o primeiro elemento
    v0.begin();

    // end: iterador para o ultimo elemento
    v0.end();


    // sort
    // ordena de forma crescente
    sort(v0.begin(),v0.end());

    // ordenda de forma decrescente
    sort(v0.begin(),v0.end(),greater<int>());


    // reverse: inverte a sequencia
    reverse(v0.begin(),v0.end());

    //min: verifica qual o menor entre dois numeros
    min(10,20);

    //max: verifica qual o maior entre dois numeros
    max(1,5);
    //exemplo:
    int a=10, b=20;
    cout<<"\nMaior: "<<max(a,b);
    cout<<"Menor: "<<min(a,b);

    // 


    return 0;
}