#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <int> lista;

int main(){
    int n,i,x,cont=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        lista.push_back(x);
    }
    sort(lista.begin(),lista.end());
    x=lista[0];
    for(i=1;i<n;i++){
        if(lista[i]!=lista[i-1]){
            x=lista[i];
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
