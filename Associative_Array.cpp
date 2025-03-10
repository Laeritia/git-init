#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> lista;

int main(){
    int n,i,x,y,pesq,pdir,flag=0;
    cin>>n>>x;
    for(i=0;i<n;i++){
        cin>>y;
        lista.push_back({y,i});
    }
    sort(lista.begin(),lista.end());
    pesq=0;
    pdir=n-1;
    while(pdir>pesq){
        if(lista[pdir].first+lista[pesq].first==x){
            flag=1;
            break;
        }
        if(lista[pdir].first+lista[pesq].first<x){
            pesq++;
        }
        if(lista[pdir].first+lista[pesq].first>x){
            pdir--;
        }
    }
    if(flag==1){
        cout<<lista[pesq].second+1<<" "<<lista[pdir].second+1;
    } else{
        cout<<"IMPOSSIBLE";
    }
    return 0;
}
