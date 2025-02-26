#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vbaldes1[12];
int vbaldes2[12];
int baldes1[12];
int baldes2[12];
int res=0;
int quant1=1000,quant2=1000;
vector <int> quants;

void escolha(int cont){
    int flag;
    int p;
    if(cont==4){
        flag=0;
        for(int j=0;j<(int)quants.size();j++){
            if(quant1==quants[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            res++;
            quants.push_back(quant1);
        }
        return;
    }
    p=cont/2;
    if(cont%2==0){
        for(int i=0;i<10+p;i++){
            if(baldes1[i]==0)
                continue;
            baldes1[i]=0;
            vbaldes2[10+p]=vbaldes1[i];
            baldes2[10+p]=1;
            quant1=quant1-vbaldes1[i];
            flag=0;
            quant2+=vbaldes1[i];
            escolha(cont+1);
            baldes1[i]=1;
            baldes2[10+p]=0;
            quant1=quant1+vbaldes1[i];
            quant2-=vbaldes1[i];
        }
    } else{
        for(int i=0;i<10+p;i++){
            if(baldes2[i]==0)
                continue;
            baldes2[i]=0;
            vbaldes1[10+p]=vbaldes2[i];
            baldes1[10+p]=1;
            quant2=quant2-vbaldes2[i];
            quant1+=vbaldes2[i];
            escolha(cont+1);
            baldes2[i]=1;
            baldes1[10+p]=0;
            quant2=quant2+vbaldes2[i];
            quant1-=vbaldes2[i];
        }
    }
}

int main(){
    int i;
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    for(i=0;i<10;i++){
        cin>>vbaldes1[i];
        baldes1[i]=1;
    }
    for(i=0;i<10;i++){
        cin>>vbaldes2[i];
        baldes2[i]=1;
    }
    escolha(0);
    cout<<res;
    return 0;
}
