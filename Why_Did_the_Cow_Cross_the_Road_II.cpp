#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

int caminho[52];
bool mark[26];
bool passei[26];

int main(){
    int i,x,j,cont=0;
    string s;
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    cin>>s;
    for(i=0;i<52;i++){
        x=s[i]-65;
        caminho[i]=x;
    }
    for(i=0;i<52;i++){
        if(passei[caminho[i]]==true)
            continue;
        for(j=i+1;j<52;j++){
            if(caminho[j]==caminho[i])
                break;
            if(mark[caminho[j]]==true){
                mark[caminho[j]]=false;
            } else{
                mark[caminho[j]]=true;
            }
        }
        for(j=0;j<26;j++){
            if(mark[j]==true){
                cont++;
                mark[j]=false;
            }
        }
        passei[caminho[i]]=true;
    }
    cout<<cont/2;
    return 0;
}
