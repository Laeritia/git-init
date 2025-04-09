#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

//int lista[100];
long long soma[200010];
long long vetor[200010];

int main(){
    int n,i;//a maior soma será uma parte mais a direita do vetor soma menos o menor valor que tem a esquerda.
    long long x,sum=0,minimo,maximooooo=-1000000000,somamaxima=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        sum+=x;
        soma[i]=sum;
        vetor[i]=x;
        if(maximooooo<x){
            maximooooo=x;
        }
    }
    minimo=soma[0];
    for(i=0;i<=n;i++){
        if(soma[i]<minimo){
            minimo=soma[i];
        }
        if(soma[i]-minimo>somamaxima){
            somamaxima=soma[i]-minimo;
        }
    }
    if(maximooooo<0){
        cout<<maximooooo;
    } else{
        cout<<somamaxima<<endl;
    }
    return 0;
}
