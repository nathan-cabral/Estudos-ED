#include<bits/stdc++.h>
using namespace std;


int main(){

    
    string s;cin>>s;
    int up=0,low=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))up++;
        else low++;
    }
    
    for(int i=0;i<s.size();i++){
        if(low>=up){
            s[i]=tolower(s[i]);
        }else{
            s[i]=toupper(s[i]);
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<"\n";

    return 0;
}