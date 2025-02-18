#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

bool mark[21][21];
bool maior[21][21];
int vet[21];

int main(){
    int n,k,i,j,z,cont=0,fat=0,cont2=0;
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    cin>>k>>n;
    for(i=0;i<n;i++){
        cin>>vet[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
                continue;
            if(i<j){
                maior[vet[i]][vet[j]]=true;
            }
        }
    }
    for(i=0;i<k-1;i++){
        for(j=0;j<n;j++){
            cin>>vet[j];
        }
        for(j=0;j<n;j++){
            for(z=0;z<n;z++){
                if(z==j)
                    continue;
                if(j>z&&maior[vet[j]][vet[z]]){
                    mark[vet[j]][vet[z]]=true;
                }
                if(j<z&&!maior[vet[j]][vet[z]]){
                    mark[vet[j]][vet[z]]=true;
                }
            }
        }
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(mark[i][j]&&mark[j][i]){
                cont++;
            }
            if(mark[i][j]&&!mark[j][i]){
                cont2++;
            }
        }
    }
    for(i=1;i<n;i++){
        fat=fat+i;
    }
    cout<<fat-cont/2-cont2<<endl;
    return 0;
}
