#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

string s[200];
bool mark[4];

int main(){
    int n,m,i,cont=0,j;
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    cin>>n>>m;
    for(i=0;i<2*n;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
        for(j=0;j<4;j++){
            mark[j]=0;
        }
        for(j=0;j<n;j++){
            if(s[j][i]=='A'){
                mark[0]=1;
            }
            if(s[j][i]=='C'){
                mark[1]=1;
            }
            if(s[j][i]=='G'){
                mark[2]=1;
            }
            if(s[j][i]=='T'){
                mark[3]=1;
            }
        }
        for(j=n;j<2*n;j++){
            if(s[j][i]=='A'){
                if(mark[0]==1){
                    cont++;
                    break;
                }
            }
            if(s[j][i]=='C'){
                if(mark[1]==1){
                    cont++;
                    break;
                }
            }
            if(s[j][i]=='G'){
                if(mark[2]==1){
                    cont++;
                    break;
                }
            }
            if(s[j][i]=='T'){
                if(mark[3]==1){
                    cont++;
                    break;
                }
            }
        }
    }
    cout<<m-cont;
    return 0;
}
