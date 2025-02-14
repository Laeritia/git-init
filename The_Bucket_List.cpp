#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vet[1001];

int main(){
    int n,nbal=0,s,t,b,ntot=0;
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>t>>b;
        vet[s]=-b;
        vet[t]=b;
    }
    for(int i=0;i<1001;i++){
        nbal=nbal+vet[i];
        if(nbal<0){
            ntot=ntot-nbal;
            nbal=0;
        }
    }
    cout<<ntot;
}
