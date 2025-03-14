#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<int> grafo[100001];

int main(){
    int n,i,x,y,maximo=0,num_cores_atual;
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    /*como esse grafo é uma árvore,o numero de cores vai ser o
      numero de vizinhos*/
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>x>>y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    for(i=1;i<=n;i++){
        num_cores_atual=1+grafo[i].size();
        if(num_cores_atual>maximo){
            maximo=num_cores_atual;
        }
    }
    cout<<maximo;
    return 0;
}
