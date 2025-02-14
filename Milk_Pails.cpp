#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vet[5001][2];

int main(){
    int x,y,m,res=0,vamo,maxi=0;
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    cin>>x>>y>>m;
    if(x>y){//y sempre maior
        vamo=x;
        x=y;
        y=vamo;
    }
    vamo=0;
    while(maxi<=m){
        while(res<=m){
            res=res+x;
        }
        if(vamo<res-x){
            vamo=res-x;
        }
        res=0;
        maxi=maxi+y;
        res=maxi;
    }
    cout<<vamo;
    return 0;
}
