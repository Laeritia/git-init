#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

string spotty[500], plain[500];
int S[500][50], P[500][50], A[64];//64 pois como temos tres lugares e base 4, o numero maximo e 63.
int n,m;

bool teste_do_set(int a,int b,int c){
    bool e_spotty=true;
    for(int i=0;i<n;i++){
        A[S[i][a]*16+S[i][b]*4+S[i][c]]=1;
    }
    for(int i=0;i<n;i++){
        if(A[P[i][a]*16+P[i][b]*4+P[i][c]]) e_spotty=false;
    }
    for(int i=0;i<n;i++){
        A[S[i][a]*16+S[i][b]*4+S[i][c]]=0;
    }
    return e_spotty;
}

int main(){
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int i,j,z,res=0;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>spotty[i];
        for(j=0;j<m;j++){
            if(spotty[i][j]=='A') S[i][j]=0;
            if(spotty[i][j]=='C') S[i][j]=1;
            if(spotty[i][j]=='G') S[i][j]=2;
            if(spotty[i][j]=='T') S[i][j]=3;
        }
    }
    for(i=0;i<n;i++){
        cin>>plain[i];
        for(j=0;j<m;j++){
            if(plain[i][j]=='A') P[i][j]=0;
            if(plain[i][j]=='C') P[i][j]=1;
            if(plain[i][j]=='G') P[i][j]=2;
            if(plain[i][j]=='T') P[i][j]=3;
        }
    }
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            for(z=j+1;z<m;z++){
                if(teste_do_set(i,j,z)) res++;
            }
        }
    }
    cout<<res;
    return 0;
}
