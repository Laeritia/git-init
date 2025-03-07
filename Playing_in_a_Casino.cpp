#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <long long int> V[300001];

int main(){
    long long int t,i,n,m,x,valor=0,j,z;
    cin>>t;
    for(i=0;i<t;i++){
        valor=0;
        cin>>n>>m;
        if(n==1){
            for(j=0;j<m;j++){
                cin>>x;
            }
            cout<<0<<"\n";
            continue;
        }
        for(j=0;j<n;j++){
            for(z=0;z<m;z++){
                cin>>x;
                V[z].push_back(x);
            }
        }
        for(j=0;j<m;j++){
            sort(V[j].rbegin(),V[j].rend());
            for(z=0;z<n-1;z++){
                valor=valor+(z+1)*(n-1-z)*(V[j][z]-V[j][z+1]);
            }
        }
        cout<<valor;
        if(i!=t-1){
            cout<<"\n";
        }
        for(j=0;j<m;j++){
            V[j].clear();
        }
    }
    return 0;
}
