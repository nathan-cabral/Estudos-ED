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
    cout<<"Menor: "<<min(a,b)<<"\n";

    // find: procura um elemento
    find(v0.begin(),v0.end(),10);
    
    // count: conta quantas vezes um valor aparece
    count(v0.begin(),v0.end(),5);

    // count if: conta quantos elementos satisfazem uma condicao
    int qtd=count_if(v0.begin(),v0.end(),[](int x){
        return x>10;  
    });  // conta quantos elementos sao maiores que 10

    // for each: executa uma operacao em cada elementos
    for_each(v0.begin(),v0.end(),[](int x){
        cout<<x<<" ";
    });

    // all of: verifica se todos satisfazem condicao
    all_of(v0.begin(),v0.end(),[](int x){
        return x>0;
    }); // retorna true se todos forem positivos

    // any of: verifica se pelo menos um satisfaz
    any_of(v0.begin(),v0.end(),[](int x){
        return x<0;
    });

    // none of: verifica se nenhum satisfaz
    none_of(v0.begin(),v0.end(),[](int x){
        return x<0;
    });

    // accumulate: acumular valores
    vector<int>v={1,1,1};
    int sum= accumulate(v.begin(),v.end(),0); // soma
    int prod=accumulate(v.begin(),v.end(),1,multiplies<int>()); // produto

    // iota: preenche sequencia crescente
    vector<int>vv(5);
    iota(vv.begin(),vv.end(),1); // util para criar indices

    // lower bound: usado em vetor ordenado, retorna primeiro elemento maior ou igual a x
    lower_bound(v0.begin(),v0.end(),10); //x=10

    // upper bound: ordenado e retorna o primeiro elemento maior que x 
    upper_bound(v0.begin(),v0.end(),2);

    // lowe bound : para posicao
    auto it=lower_bound(vv.begin(),vv.end(),5);
    int pos=it-v.begin();

    // binary search : tbm exige ordenacao
    if(binary_search(v0.begin(),v0.end(),2)){ // retorna so false ou true
        cout<<"\nexiste\n";
    }
    
    // erase: remover elementos
    v0.erase(v0.begin()+2);// remove o elemento da pos 2
    v0.erase(v0.begin()+2,v.begin()+5);// remove o intervalo

    // insert: insere em uma posicao
    v0.insert(v.begin()+2,10);// posicao 2 insere 10

    // erase+remove: remove todas as ocorrencias de algum numero
    v0.erase(remove(v0.begin(),v0.end(),5),v0.end()); // remove ocorrencias de 5

    // maximo divisor comum:
    gcd(a,b);
    // minimo divisor comum: 
    lcm(a,b);

    // valor absoluto:
    abs(-10);

    //pair: tem duas informacoes
    pair<int,int>p;
    p.first;
    p.second;

    pair<int,int>p={20,10};

    //tuple: mais de duas informacoes
    tuple<int,int,double>t={12,33,2.2};
    // acessar posicoes
    get<0>(t);
    get<1>(t);
    get<2>(t);






    return 0;
}