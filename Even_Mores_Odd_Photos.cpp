#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,x,pares=0,impares=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(x%2==0){
            pares++;
        } else{
            impares++;
        }
    }
    if(pares>impares){
        cout<<2*impares+1;
    } else{
        while(abs(impares-pares)>1){
            impares=impares-2;
            pares=pares+1;
        }
        if((impares-pares)==1){
            cout<<pares+impares-2;
        } else{
            cout<<pares+impares;
        }
    }
    return 0;
}
