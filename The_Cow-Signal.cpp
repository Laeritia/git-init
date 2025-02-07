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
}

/*int arr[4];
int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin>>n;
    int a,b,g,tr;
    for(int i=0;i<n;i++){
        cin>>a>>b>>g;
        tr=arr[a];
        arr[a]=arr[b];
        arr[b]=tr;
        arr[g]++;
    }
    int maximo=0;
    for(int i=1;i<4;i++){
        if(arr[i]>maximo){
            maximo=arr[i];
        }
    }
    cout<<maximo<<endl;
    return 0;
}*/

