#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int ind[1000];
int num[1000];
char ir[1000];

bool compara(int x,int y){
    if(num[x]<num[y]){
        return true;
    }
    if(num[x]>num[y])
        return false;
    if(ir[x]=='L'&&ir[y]=='G'){
        return false;
    } else return true;

}

int main(){
    int n,i,x,cont=0,indiz,maxi;
    char c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c>>x;
        ind[i]=i;
        num[i]=x;
        ir[i]=c;
        if(c=='L')
            cont++;
    }
    maxi=cont;
    sort(ind,ind+n,compara);
    for(i=0;i<n;i++){
        indiz=ind[i];
        if(ir[indiz]=='G'){
            cont++;
        }
        if(ir[indiz]=='L'){
            cont--;
        }
        if(cont>maxi){
            maxi=cont;
        }
    }
    cout<<n-maxi;
    return 0;
}
