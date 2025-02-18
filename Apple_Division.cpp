#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

typedef long long int lli;
int vet[20];
int n;

lli macas(int index,lli soma1,lli soma2){
    if(index==n){
        return abs(soma1-soma2);
    }
    return min(macas(index+1,soma1+vet[index],soma2),macas(index+1,soma1,soma2+vet[index]));
}

int main(){
    int i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>vet[i];
    }
    cout<<macas(0,0,0)<<endl;
}
