#include<bits/stdc++.h>
using namespace std;


int main(){

    int k,n,w;cin>>k>>n>>w;
    int tot=k;
    for(int i=2;i<=w;i++){
        tot+=i*k;
    }
    cout<<max(0,tot-n)<<'\n';
    return 0;
}