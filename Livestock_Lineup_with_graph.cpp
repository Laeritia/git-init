#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<string> vacas={"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
map<string,int> indice;
vector<string> grafo[8];
int visitados[8];


int main(){
    int n,i;
    string a,lixo,b;
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    sort(vacas.begin(),vacas.end());
    for(i=0;i<8;i++){
        indice[vacas[i]]=i;
    }
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>lixo>>lixo>>lixo>>lixo>>b;
        grafo[indice[a]].push_back(b);
        grafo[indice[b]].push_back(a);
    }
    for(i=0;i<8;i++){
        if(grafo[i].size()==0){
            cout<<vacas[i]<<endl;
        }
        if(grafo[i].size()==1){
            if(visitados[i])
                continue;
            visitados[i]=true;
            cout<<vacas[i]<<endl;
            a=grafo[i][0];//a é uma string
            while(grafo[indice[a]].size()==2){
                visitados[indice[a]]=true;
                cout<<a<<endl;
                if(visitados[indice[grafo[indice[a]][0]]]){
                    a=grafo[indice[a]][1];
                } else{
                    a=grafo[indice[a]][0];
                }
            }
            visitados[indice[a]]=true;
            cout<<a<<endl;
        }
    }
    return 0;
}
