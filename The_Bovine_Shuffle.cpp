#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,guard=0;
    int vet[101];
    int vet2[101];
    string lista[101];
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>vet[i];
    }
    for(i=1;i<=n;i++){
        cin>>lista[i];
    }
    for(i=1;i<=n;i++){
        guard=vet[i];
        for(int j=0;j<2;j++){
            guard=vet[guard];
        }
        vet2[i]=guard;
    }
    for(i=1;i<=n;i++){
        cout<<lista[vet2[i]]<<endl;
    }
}
