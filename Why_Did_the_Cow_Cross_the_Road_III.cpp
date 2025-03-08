#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int>> vacas;
bool check[100];

int main(){
    int n,i,tc,dur,tempo=0;
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tc>>dur;
        vacas.push_back({tc,dur});
    }
    sort(vacas.begin(),vacas.end());
    while(!vacas.empty()){
        if(tempo<vacas[0].first){
            tempo=vacas[0].first;
        }
        tempo=vacas[0].second+tempo;
        vacas.erase(vacas.begin());
    }
    cout<<tempo;
    return 0;
}
