#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int ondeesta[101];
int hierarquia[101];
bool posicao[101];

int main(){
    int n,m,k,i,vaca,lugar,cont=0,j,flag=0,guarda=0,ind;
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);
    cin>>n>>m>>k;
    for(i=0;i<m;i++){
        cin>>hierarquia[i];
    }
    for(i=0;i<k;i++){
        cin>>vaca>>lugar;
        posicao[lugar]=true;
        ondeesta[vaca]=lugar;
    }
    ind=-1;
    cont=1;
    for(i=0;i<m;i++){
        if(ondeesta[hierarquia[i]]!=0){
            guarda=hierarquia[i];
            ind=i;
        }
        if(hierarquia[i]==1){
            if(ind!=-1){
                cont=i-ind;
            } else{
                cont=i+1;
            }
            flag=1;
            if(ondeesta[1]!=0){
                flag=2;
            }
            break;
        }
    }
    if(flag==2){
        cout<<ondeesta[1];
    }
    if(flag==1){
        i=1;
        if(guarda==0){
            i=1;
        } else{
            i=ondeesta[guarda]+1;
        }
        while(cont>0){
            if(posicao[i]==false)
                cont--;
            i++;
        }
        cout<<i-1;
    }
    if(flag==0){
        for(i=0;i<m;i++){
            if(ondeesta[hierarquia[i]]!=0){
                cont=ondeesta[hierarquia[i]]-1;
                j=i-1;
                while(ondeesta[hierarquia[j]]==0&&j>=0){
                    while(posicao[cont]==true){
                        cont--;
                    }
                    posicao[cont]=true;
                    ondeesta[hierarquia[j]]=cont;
                    j--;
                }
            }
        }
        for(i=1;i<=n;i++){
            if(posicao[i]==false){
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
