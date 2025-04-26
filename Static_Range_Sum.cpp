#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <long long int> soma;

int main(){
    long long int x,sum=0,y;
    int i,n,q;
    soma.push_back(0);
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
        soma.push_back(sum);
    }
    for(i=0;i<q;i++){
        cin>>x>>y;
        cout<<soma[y]-soma[x]<<endl;
    }
    return 0;
}

