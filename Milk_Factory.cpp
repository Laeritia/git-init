#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<int> grafo[101];
vector<int> nao_visitados;

int main(){
    int n,i,x,y,ans=-1,falta_visitar;
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>x>>y;
        grafo[y].push_back(x);
    }
    for(i=1;i<=n;i++){
        falta_visitar=n-1;
        nao_visitados.clear();
        nao_visitados.push_back(i);
        while(!nao_visitados.empty()){
            for(auto w: grafo[nao_visitados[0]]){
                falta_visitar--;
                nao_visitados.push_back(w);
            }
            nao_visitados.erase(nao_visitados.begin());
        }
        if(falta_visitar==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
