#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

map<long long,long long> a;

int main(){
    int q,i,x;
    long long y,z;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>x;
        if(x==1){
            cin>>y;
            cout<<a[y];
            if(i!=q-1){
                cout<<"\n";
            }
        } else{
            cin>>y>>z;
            a[y]=z;
        }
    }
    return 0;
}
