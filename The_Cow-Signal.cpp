#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

string vet[10];

int main(){
    int m=0,n=0,k=0;
    freopen("cowsignal.in", "r", stdin);
    cin>>m>>n>>k;
    for(int i=0;i<m;i++){
        cin>>vet[i];
    }
    freopen("cowsignal.out", "w", stdout);
    for(int i=0;i<m;i++){
        for(int p=0;p<k;p++){
            for(int j=0;j<n;j++){
                for(int z=0;z<k;z++){
                    cout<<vet[i][j];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


