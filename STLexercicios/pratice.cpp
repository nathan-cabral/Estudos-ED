#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;cin>>s;
    set<char>dist;
    for(char c:s){
        dist.insert(c);
    }
    if(dist.size()%2!=0)cout<<"IGNORE HIM!\n";
    else cout<<"CHAT WITH HER!\n";
    return 0;
}