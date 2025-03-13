#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cont=0,i;
    bool errado=false;
    string a,b;
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin>>n>>a>>b;
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(!errado){
                errado=true;
                cont++;
            }
        } else{
            errado=false;
        }
    }
    cout<<cont;
    return 0;
}
