#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int vet[5001][2];

int main(){
    int n,i,res=0,sub1,sub2,resul;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>vet[i][0];
    }
    for(i=0;i<n;i++){
        cin>>vet[i][1];
    }
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sub1=vet[i][0]-vet[j][0];
            sub2=vet[i][1]-vet[j][1];
            resul=pow(sub1,2)+pow(sub2,2);
            if(res<resul){
                res=resul;
            }
        }
    }
    cout<<res;
}
