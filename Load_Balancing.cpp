#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> vacas;
vector<int> yvacas;

int main(){
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int n,b,i,x,y,j,z,numatual=0,val1,val2,val3,val4,minmaxi=101,maximo=0;
    cin>>n>>b;
    for(i=0;i<n;i++){
        cin>>x>>y;
        vacas.push_back({x,y});
        yvacas.push_back(y);
    }
    sort(vacas.begin(),vacas.end());
    sort(yvacas.begin(),yvacas.end());
    for(i=0;i<n;i++){
        if(i!=n-1&&vacas[i].first==vacas[i+1].first){
            continue;
        }
        for(j=0;j<n;j++){
            if(j!=n-1&&yvacas[j]==yvacas[j+1]){
                continue;
            }
            numatual=0;
            for(z=0;z<=i;z++){
                if(vacas[z].second<=yvacas[j]){
                    numatual++;
                }
            }
            val1=numatual;
            val2=i-numatual+1;
            val3=j-numatual+1;
            val4=2*n-i-j+numatual-2-n;
            maximo=max({val1,val2,val3,val4});
            minmaxi=min(maximo,minmaxi);
        }
    }
    cout<<minmaxi;
    return 0;
}
