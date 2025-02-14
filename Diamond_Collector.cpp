#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vet[10001];

int main(){
    int n,k,i,x,j,cont=0,ntot=0;
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>x;
        vet[x]++;
    }
    for(i=1;i<10001-k;i++){
        for(j=i;j<i+k+1;j++){
            cont=cont+vet[j];
        }
        if(cont>ntot){
            ntot=cont;
        }
        cont=0;
    }
    cout<<ntot;
    return 0;
}
