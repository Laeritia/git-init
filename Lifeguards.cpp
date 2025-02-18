#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

int vist[1001];
int vacas[100][2];

int main(){
    int n,i,j,ind=-2,cont=0,num=0,maxi=0;
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>vacas[i][0]>>vacas[i][1];
    }
    for(i=0;i<n;i++){
        for(j=0;j<1001;j++){
            vist[j]=0;
        }
        for(j=0;j<n;j++){
            if(j==i)
                continue;
            vist[vacas[j][0]]=1;
            vist[vacas[j][1]]=-1;
        }
        for(j=0;j<1001;j++){
            if(vist[j]==1&&ind>=0){
                cont++;
            }
            if(vist[j]==1&&ind==-2){
                ind=j;
                cont++;
            }
            if(vist[j]==-1){
                cont--;
                if(cont==0){
                    num=num+(j-ind);
                    ind=-2;
                }
            }
        }
        if(num>maxi){
            maxi=num;
        }
        num=0;
    }
    cout<<maxi;
    return 0;
}
