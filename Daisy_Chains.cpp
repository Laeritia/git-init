#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vet[100];
bool vet2[1001];

int main(){
    int n,k,ntot=0,i,j,cont=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>vet[i];
    }
    for(i=0;i<n;i++){
        for(k=0;k<1001;k++){
            vet2[k]=false;
        }
        for(j=i;j<n;j++){
            cont=cont+vet[j];
            vet2[vet[j]]=true;
            if(cont%(j-i+1)==0){
               if(vet2[cont/(j-i+1)]){
                    ntot++;
                }
            }
        }
        cont=0;
    }
    cout<<ntot;
    return 0;
}
