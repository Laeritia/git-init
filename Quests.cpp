#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main(){
    int t,i,n,k,j,maximo=0,b,maior_b_at=0,soma=0;
    cin>>t;
    for(i=0;i<t;i++){
        soma=0;
        maximo=0;
        maior_b_at=0;
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            cin>>b;
            if(j<k){
                soma=soma+a[j];
                if(maior_b_at<b){
                    maior_b_at=b;
                }
                if(maximo<soma+(k-j-1)*maior_b_at){
                    maximo=soma+(k-j-1)*maior_b_at;
                }
            }
        }
        cout<<maximo<<"\n";
    }
    return 0;
}
